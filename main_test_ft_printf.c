#include "libftprintf.h"
#include <stdio.h>
int		main(void)
{
	int		a = -48963155;
	short int	b = -32767;
	char	c = -125;
	ssize_t	d = -9223372036854775807;
	char *e = "Salut Les Copains";
	char f = 'a';
//	printf("e est %s", e);
	ft_printf("le test de printf a[%u] b[%hu] c[%hhd] d[%jd] e[%s] f[%c]\n", a, b, c, d, e, f);
	return (0);
}
