section .data
txt:	db "Hello, Holberton", 0
format:	db "%s", 10, 0

section .text
	extern printf
	global main
main:
	mov rax, 0
	mov rsi, txt
	mov rdi, format
	call printf
	mov rax, 0
	ret
