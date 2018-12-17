

segment		.text
global		_ft_isalnum
extern		_ft_isalpha
extern		_ft_isdigit

_ft_isalnum:
	push	rbp
	mov		rbp, rsp
	sub		rsp, 16			; allocate stack memory for rdi
	mov	[rsp], rdi			; push rdi to stack
	call	_ft_isalpha 
	mov		rdi, [rsp]		; restore rdi from stack
	cmp		rax, 1
	je		exit
	call	_ft_isdigit
exit:
	leave
	ret
