section	.data
format		db	"%s, %s",10,0
message2	db	"Holberton",0
message1	db	"Hello",0

	section	.text
	extern	printf
	global	main

main:
	mov		rdx,	message2
	mov		rsi,	message1
	mov		rdi,	format
	mov		rax,	0
	call	printf

	mov		rbx,	0
	mov		rax,	1
	int		0x80

