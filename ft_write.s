section .text
    global _ft_write

_ft_write:
    push rbp
    mov rbp, rsp

    mov rax, 0x2000004
    syscall
    leave
    ret