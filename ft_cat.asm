segment .bss
buff resb  5


segment .data
newline    db  0x0a

segment		.text
global		_ft_cat

_ft_cat:
    mov rbx, rdi
    mov r12, 0

read:
    mov rdi, rbx
    mov rax, 0x2000003
    mov rsi, buff
    mov rdx, 5
    syscall

    cmp rax, 0
    jle _end

print:
    mov r12, 1
    mov rdx, rax
    mov rax, 0x2000004
    mov rdi, 1
    mov rsi, buff
    syscall
    
    jmp read

_end:
    cmp r12, 0
    je exit
    mov rax, 0x2000004
    mov rdi, 1
    mov rdx, 1
    mov rsi, newline
    syscall

exit:
    ret