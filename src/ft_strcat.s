segment		.text
global		_ft_strcat
extern		_ft_strlen

_ft_strcat:
	push	rbp
	mov		rbp, rsp
	mov		rbx, rdi									; return val
	mov 	r12, rsi
	xor		r8, r8

	call 	_ft_strlen
	mov		rdi, rbx
	mov 	rsi, r12
cat:													; append src to dest str
	cmp		byte [rsi + 1 * r8], 0
	je		end
	mov		rdx, [rsi + 1 * r8]
	mov		[rdi + 1 * rax], rdx
	inc		rax
	inc		r8
	jmp		cat
end:
	xor		rdx, rdx
	mov		[rdi + 1 * rax], rdx
	mov		rax, rbx
	leave
	ret
