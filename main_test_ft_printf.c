#include "libftprintf.h"

int		main(void)
{
	int		a = 658;
	short int	b = 32000;
	char	c = 125;
	ssize_t	d = 486;
	ft_printf("le test de printf a[%d] b[%hd] c[%hhd] d[%jd]\n", a, b, c, d);
	return (0);
}
