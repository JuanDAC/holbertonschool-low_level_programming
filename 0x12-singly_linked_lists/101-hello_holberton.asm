section	.data
	format	db	"Hello, Holberton",10,0

	section	.text
	extern	printf
	global	main

main:
	mov		rdi,	format
	mov		rax,	0
	call	printf

	mov		rbx,	0
	mov		rax,	1
	int		0x80

