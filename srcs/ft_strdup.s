section .text
    global _ft_strdup
    extern _ft_strlen
    extern _ft_strcpy
    extern _malloc

_ft_strdup:
    push rbp
    mov rbp, rsp

    mov rbx, rdi
    call _ft_strlen
    inc rax
    mov rdi, rax
    call _malloc
    mov rsi, rbx
    mov rdi, rax
    call _ft_strcpy
    leave
    ret