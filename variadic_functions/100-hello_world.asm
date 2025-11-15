bits 64

section .data
hello: db "Hello, World", 10
len equ $ - hello

section .text
global main

main:
	mov	rax, 1;
	mov	rdi, 1;
	lea	rsi, [rel hello];
	mov	rdx, len;
	syscall

	xor	rax, rax;
	ret
