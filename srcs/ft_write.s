section .text
    global _ft_write

_ft_write:
    push rbp
    mov rbp, rsp

    mov rax, 0x2000004
    syscall
    cmp rdx, 0x0
    jne _err
    leave
    ret

_err:
    mov rax, -1
    leave
    ret