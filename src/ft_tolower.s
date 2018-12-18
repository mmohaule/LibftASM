segment		.text
global		_ft_tolower

_ft_tolower:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 'A'
	jl		return
	cmp		rdi, 'Z'
	jg		return
	add		rdi, 32
	mov		rax, rdi
return:
	mov		rax, rdi
	leave
	ret