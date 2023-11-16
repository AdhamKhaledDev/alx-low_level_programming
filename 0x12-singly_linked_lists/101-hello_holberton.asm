section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

_start:
    ; Write the string to stdout using printf
    mov rdi, hello
    mov rax, 0            ; syscall number for sys_write
    call printf
    ; Exit the program
    mov rax, 60           ; syscall number for sys_exit
    xor rdi, rdi          ; exit code 0
    syscall

section .text
    ; External function declarations
    extern printf

section .data
    ; Define the format string for printf
    fmt db "%s", 0
