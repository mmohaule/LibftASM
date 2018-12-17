segment		.text
global		_ft_bzero
extern		_ft_memset

_ft_bzero:
	push	rbp
	mov		rbp, rsp
	mov		rdx, rsi			; 2nd arg of ft_bzero as 3rd arg of ft_memset
	xor		rsi, rsi			; 2nd arg of ft_memset = 0
	call	_ft_memset
	leave
	ret
