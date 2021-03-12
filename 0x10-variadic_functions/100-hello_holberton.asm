section .data
	global main

main:
	mov rax, 4
	mov rbx, 1
	mov rcx, holbiemessage
	mov rdx, lengthmessage
	int 80h

	mov rax, 1
	mov rbx, 0
	int 80h

holbiemessage:		db "Hello, Holberton", 10
lengthmessage:		equ $ - holbiemessage
