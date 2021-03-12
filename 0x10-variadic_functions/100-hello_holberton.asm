section .data
	global main

main:
	mov rax, 4
	mov rbx, 1
	mov rcx, holbie_message
	mov rdx, length_message
	int 80h

	mov rax, 1
	mov rbx, 0
	int 80h

holbie_message:
	db "Hello, Holberton", 10, 0
length_message:
	equ $ - holbie_message
