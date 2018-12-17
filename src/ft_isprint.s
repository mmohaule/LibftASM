

segment		.text
global		_ft_isprint

_ft_isprint:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, ' '
	jl		notprint
	cmp		rdi, '~'
	jg		notprint
	mov		rax, 1
	leave
	ret
notprint:
	mov		rax, 0
	leave
	ret
