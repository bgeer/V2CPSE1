.cpu cortex-m0
.global application
.text
.align 1

string:
    .asciz "Hello world, the ANSWER is 42! @[]`{}~\n"
    .align 1

application:
    ldr r0, =string
    bl print_asciz