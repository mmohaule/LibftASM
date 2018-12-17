

segment		.text
global		_ft_isdigit

_ft_isdigit:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, '0'
	jl		false
	cmp		rdi, '9'
	jg		false
	mov		rax, 1
	leave
	ret
false:
	mov		rax, 0
	leave
	ret
