section	.data
format		db	"%s, %s",10,0
message1	db	"Holberton",0
message2	db	"Hello",0

	section	.text
	extern	printf
	global	main

main:
	mov		edx,	message1
	mov		esi,	message2
	mov		edi,	format
	mov		eax,	0
	call	printf

	mov		ebx,	0
	mov		eax,	1
	int		0x80

