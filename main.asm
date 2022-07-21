.386
.model flat, stdcall
.stack 4096

ExitProcess PROTO, dwExitCode:DWORD

.data
myList DWORD 1, 2, 4, 8, 16, 32

.code
main PROC
	mov eax, 7
	add eax, 8
	INVOKE ExitProcess, eax
main ENDP

END main