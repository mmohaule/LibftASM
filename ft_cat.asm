segment .bss
buff resb  10


segment .data
data    db  "data", 0x0a

segment		.text
global		_ft_cat

_ft_cat:
    mov rbx, rdi

read:
    mov rdi, rbx
    mov rax, 0x2000003
    mov rsi, buff
    mov rdx, 5
    syscall

    cmp rax, 0
    je exit

    mov rax, 0x2000004
    mov rdi, 1
    mov rsi, buff
    mov rdx, 100
    syscall
    
    jmp read

exit:
    ret