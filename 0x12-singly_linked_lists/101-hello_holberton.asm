global main
extern printf

section .data
format db 'Hello, Holberton\n', 0

section .text
main:
	mov edi, format     ; Set the format string
	xor eax, eax        ; Clear the eax register
	call printf         ; Call printf function
	mov eax, 0          ; Set return value to 0
	ret                 ; Return from the main function
