segment		.text
global		_ft_strdup
extern		_malloc
extern		_ft_strlen
extern		_ft_bzero
extern		_ft_memcpy

_ft_strdup:
	push	rbp
	mov		rbp, rsp
	mov		rbx, rdi		; s1
	call	_ft_strlen
	inc		rax				; +1 for null char
	mov		r12, rax		; strlen
	mov		rdi, rax		; strlen as malloc argument
	call	_malloc
	mov		r13, rax		; ptr to allocated memory (s2)
	mov		rdi, rax		; ft_memcpy dst	
	mov		rsi, rbx		; ft_memcpy src
	mov		rdx, r12		; ft_memcpy len
	call	_ft_memcpy
	mov		rax, r13
	leave
	ret
