segment .bss
buff resb  100

segment		.text
global		_ft_cat

_ft_cat:
    mov rax, 0x2000003
    mov rsi, buff
    mov rdx, 100
    syscall

    cmp rax, 0
    je exit
    
    mov rax, 0x2000004
    mov rdi, 1
    mov rsi, buff
    mov rdx, 100
    syscall
    
    exit:
        ret