

segment		.text
global		_ft_isdigit

_ft_isdigit:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, '0'
	jl		notdigit
	cmp		rdi, '9'
	jg		notdigit
	mov		rax, 1
	leave
	ret
notdigit:
	mov		rax, 0
	leave
	ret
