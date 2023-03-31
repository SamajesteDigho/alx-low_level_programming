section .data
hello db "Hello, Holberton", 0x0A   ; null-terminated string with new line character

section .text
global _start

_start:
; write the string to stdout
mov eax, 4      ; syscall number for write
mov ebx, 1      ; file descriptor for stdout
mov ecx, hello  ; pointer to the message to print
mov edx, 16     ; message length in bytes
int 0x80        ; invoke the system call

