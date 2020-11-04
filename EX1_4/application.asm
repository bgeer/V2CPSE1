.global application
.cpu cortex-m0
.text
.align 1

string:
    .asciz "Hello world, the ANSWER is 42! @[]`{}~\n"
    .align 1

application:
    push { lr }
    ldr r0, =string
    bl print_asciz
    pop { pc }