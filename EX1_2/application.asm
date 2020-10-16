.global application
.cpu cortex-m0

string:
    .asciz ""Hello world, the ANSWER is 42! @[]`{}~\n"

application:
    ldr r0, =string
    bl print_asciz