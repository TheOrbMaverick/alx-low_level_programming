section .data
    hello db "Hello, Holberton",10 ; The string to print, 10 is the newline character
    hello_len equ $ - hello         ; Calculate the length of the string

section .text
    global main
    extern printf

main:
    mov rdi, hello         ; The format string
    call printf            ; Call printf
    ret
