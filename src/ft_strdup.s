segment		.text
global		_ft_strdup
extern		_malloc
extern		_ft_strlen
extern		_ft_bzero
extern		_ft_memcpy

_ft_strdup:
	push	rbp
	mov		rbp, rsp
	mov		rbx, rdi				; store str ptr in callee-saved register
	call	_ft_strlen
	inc		rax						; add 1 to strlen for null char
	mov		r12, rax				; store strlen in callee-saved register
	mov		rdi, rax				; set strlen as malloc arg
	call	_malloc
	mov		r13, rax				; store ptr of allocated memory in callee-saved register
	mov		rdi, rax
	mov		rsi, rbx
	mov		rdx, r12
	call	_ft_memcpy
	mov		rax, r13
	leave
	ret
