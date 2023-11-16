global main
extern printf

section .data
format_string db 'Hello, Holberton\n', 0

section .text
main:
	mov edi, format_string  ; Load the address of the format string
	xor eax, eax            ; Clear the eax register
	call printf             ; Invoke the printf function
	mov eax, 0              ; Set the return value to 0
	ret                     ; Return from the main function
