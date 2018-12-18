segment		.text
global		_ft_strlen

_ft_strlen:
	push	rbp
	mov		rbp, rsp
	cld                     ; clear direction flag
	xor		rax, rax	    ; 0
	mov		rcx, -1			; max iteration (2's complement)
	repne	scasb
	mov		rax, -2
	sub		rax, rcx
	leave
	ret