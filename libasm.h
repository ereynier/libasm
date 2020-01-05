/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libasm.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/05 13:23:20 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/05 13:23:22 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

extern int ft_strlen(char *str);
extern char *ft_strcpy(char *dest, char *src);
extern int ft_strcmp(char *s1, char *s2);
extern int ft_write(int fd, const void *buf, size_t count);
extern int ft_read(int fd, const void *buf, size_t count);
extern char *ft_strdup(const char *s);

#endif
