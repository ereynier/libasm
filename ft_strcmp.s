section .text
    global _ft_strcmp

_ft_strcmp:
    push rbp
    mov rbp, rsp
    xor rax, rax
    xor rcx, rcx
    
comp:
    mov al, [rdi]
    mov cl, [rsi]
    cmp al, cl
    jne end
    cmp al, 0
    je end
    cmp cl, 0
    je end
    inc rdi
    inc rsi
    jmp comp

end:
    sub ax, cx
    cwde
    cdqe
    leave
    ret
