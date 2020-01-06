section .text
    global _ft_strlen

_ft_strlen:
    push rbp
    mov rbp, rsp

    mov rcx, -1
    mov rax, 0
    repne scasb
    not rcx
    sub rcx, 1
    mov rax, rcx
    leave
    ret