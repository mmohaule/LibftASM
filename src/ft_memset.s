
segment		.text
global		_ft_memset

_ft_memset:
	push	rbp
	mov		rbp, rsp
	mov		rax, rsi
	mov		rcx, rdx
	rep		stosb
	mov		rax, rdi
	leave
	ret