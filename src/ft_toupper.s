segment		.text
global		_ft_toupper

_ft_toupper:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 'a'
	jl		return
	cmp		rdi, 'z'
	jg		return
	sub		rdi, 32
	mov		rax, rdi
return:
	mov		rax, rdi
	leave
	ret
