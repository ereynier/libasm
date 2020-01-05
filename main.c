/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/05 13:23:15 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/05 13:23:16 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *src = "salut";
    char *dst;

    dst = malloc(6);

    printf("strlen : %d\n", ft_strlen(src));
    printf("copy : %s, dst : %s, src : %s\n", ft_strcpy(dst, src), dst, src);

    return (0);
}
