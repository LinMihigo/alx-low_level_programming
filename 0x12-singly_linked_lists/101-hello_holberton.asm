section	.text
    global main
    extern printf

main:
    ;Call printf
    mov rdi, format
    mov rsi, message
    xor rax, rax        ;   Clear RAX to indicate no floating pt args
    call printf

    ;Exit the program
    mov rax, 60     ;system call for exit
    xor rdi, rdi    ;exit code 0
    syscall

section .data
    message db 'Hello, Holberton\n', 0
    format db '%s', 0   ; %s for string, 10 for newline, 0 for \0
