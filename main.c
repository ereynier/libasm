/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ereynier <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/05 13:23:15 by ereynier     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/05 20:19:27 by ereynier    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	*src = "salut";
	char	*dst;
	char	*dup;
	char	*dst2;
	int		fd = open("test", O_RDONLY);

	dst = malloc(6);
	dst2 = calloc(6, 1);

	printf("strlen : %d\n", ft_strlen(src));
	printf("copy : %s, dst : %s, src : %s\n", ft_strcpy(dst, src), dst, src);
	printf("ft_cmp : %d\n", ft_strcmp("sf", "sbl~"));
	printf("cmp : %d\n", strcmp("sf", "sbl~"));
	printf("write return : %d\n", ft_write(1, "yo\n", 3));
	printf("read return : %d, read : %s\n", ft_read(fd, dst2, 6), dst2);
	dup = ft_strdup("bonjour");
	printf("strdup : %s", dup);
	free(dup);
	return (0);
}
