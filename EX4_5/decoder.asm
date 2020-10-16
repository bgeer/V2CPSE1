.cpu cortex-m0
.bss
	channel: .fill 0x28         @; TO DO
.text 
.align 2 
.global decoder

decoder:
	push {lr} 					@; push de linkerpointer
	ldr	r3, =channel			@; stop de channel in r3
	ldr	r4, =compressed			@; laad de pointer van t begin van de file in r4
	mov	r5, #0					@; index register
	mov	r6, #0					@; offset register
	mov	r7, #0					@; length register
	
FileLoop:
	ldrb r0, [r4, r5]			@; stopt het index karakter in r0
	add r5, #1					@; index++
	cmp r0, #0					@; stopt met subroutine wanneer EOF
	beq	done					@; branch naar done wanneer r0 == EOF
	
	cmp r0, #'@'				@; checkt of r0 gelijk is aan de compress token(@)
	beq	decompress				@; wanneer cmp gelijk is branch naar decompress
	bl buffer					@; gaat naar buffer branch
	bl uart_put_char			@; print elk niet gecrompressed karakter
	b FileLoop					@; branch terug naar de fileloop voor volgende karakter
	
decompress:
	ldrb r6, [r4, r5]			@; laad eerste karakter na de @ in r6
	add r5, #1					@; index++
	ldrb r7, [r4, r5]			@; laad tweede karakter na de @ in r7
	add r5, #1					@; index++
	sub r6, r6, #'0'			@; -48, zet offset karakter om naar int
	sub r7, r7, #'0'			@; -48, zet lengte karakter om naar int
	
decompressLoop:
	ldrb r0, [r3, r6]			@; laad memeory in r0
	bl buffer					@;  branch naar buffer subroutine
	bl uart_put_char			@; print char
	sub	r7, #1					@; length--
	beq FileLoop				@; check of r7 == 1 als true is de compresssion gedaan
	b decompressLoop			@; loop
	
buffer:
	push {lr}					@; push de linkerpointer
	mov r1, #39					@; zet de buffer lengte in register 1

bufferLoop:
	sub r1, #1 					@; index--
	ldrb r2, [r3, r1] 			@; laad memeory in r2
	add r1, #1					@; index++
	strb r2, [r3, r1]			@; sla het karakter op in r3 met een index r1 in r2
	sub r1, #1					@; index--

	cmp r1, #0					@;  vergelijk r1 met 0
	beq bufferDone				@; branch wanneer gelijk
	b bufferLoop				@; loop
	
bufferDone:
	strb r0, [r3, #0]			@; laad char
	pop {pc}					@; pop de programpointer
	
done:
	pop {pc} 					@; pop de programpointer