
segment		.text
global		_ft_isalpha

_ft_isalpha:
uppercase:
	push	rbp
	mov		rbp, rsp
	cmp		rdi, 'A'
	jl		notalpha
	cmp		rdi, 'Z'
	jle		isalpha
lowercase:
	cmp		rdi, 'a'
	jl		notalpha
	cmp		rdi, 'z'
	jg		notalpha
isalpha:
	mov		rax, 1
	leave
	ret
notalpha:
	mov		rax, 0
	leave
	ret
