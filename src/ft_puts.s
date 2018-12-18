segment		.text
global		_ft_puts

_ft_puts:
	push	rbp
	mov		rbp, rsp
	sub		rsp, 16				; allocate stack memory for end char
	mov		byte [rsp], 10		; store end on stack
	mov		rbx, rdi			; store str ptr in callee-saved register
loop:
	mov		rax, 0x2000004		; write system call
	mov		rdi, 1				; stdout fd
	mov		rsi, rbx			; pointer to byte
	mov		rdx, 1				; num of bytes to write
	cmp		byte [rbx], 0		; test for end of string
	je		end
	syscall
	inc		rbx
	jmp		loop
end:
	mov		rax, 0x2000004
	mov		rdi, 1	
	mov		rsi, rsp
	mov		rdx, 1				
	syscall
	leave
	ret