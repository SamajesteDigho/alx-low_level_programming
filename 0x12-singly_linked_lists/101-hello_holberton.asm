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

; exit the program with status code 0
mov eax, 1      ; syscall number for exit
xor ebx, ebx    ; exit status code (0 = success)
int 0x80        ; invoke the system call