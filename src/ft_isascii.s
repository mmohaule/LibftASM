
segment		.text
global		_ft_isascii

_ft_isascii:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 0
	jl		notascii
	cmp		rdi, 127
	jg		notascii
	mov		rax, 1
	leave
	ret
notascii:
	mov		rax, 0
	leave
	ret
