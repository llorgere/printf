/*
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stddef.h>
#include <wchar.h>
#include <sys/types.h>
*/
#include "libftprintf.h"

//char	*ft_what_type(int n, va_list ap);

/*int		ft_type_arg(int n)
{
	if (n == 0)
		return (1);
	else if (n == 1)
		return (21);
	else if(n == 2)
		return (26);
	else if(n == 3)
		return (36);
	else 
		return (-1);
}
*/
int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			nb_args;
	int			i;
//	int 		j;
	flag_type	flag;
//	type		wtype;
	wii			wiit;
	char		*cur_arg = (char *)format;
	
//	j = 1;
	i = 0;
/*	type.conv_num = 0;
	type.width = 0;
	type.preci = 0;
	type.minus = 0;
	type.dies = 0;
	type.zero = 0;
	type.space = 0;
	type.point = 0;
*/	nb_args = 0;
	wiit = ft_watinit(format, ft_size_tab(format));
	if (format == NULL)
	{
//		printf("pas d'arguments");
		return (-1);
	}
	va_start(ap, format);
	while (cur_arg != NULL)
	{
		while (wiit.pos_conv[i] != 1 && wiit.tab[i])
			i++;
		nb_args++;
		flag = ft_arg_conv(wiit.tab[i]);
//		wtype = ft_what_type(type);
		cur_arg = ft_what_type(flag.conv_num, ap);
//		printf("test de va_arg de la premiere boucle cur_arg est : [%s]\n", cur_arg);
		free(cur_arg);
		i++;
	}
	va_end(ap);
	if (nb_args != wiit.nb_conv)
		return (-1);
	i = 0;
//	printf("%s", format);
	va_start(ap, format);
	while(wiit.tab[i])
	{
		if (wiit.pos_conv[i] == 0)
			ft_putstr(wiit.tab[i]);
		else if (wiit.pos_conv[i] == 1)
		{
			flag = ft_arg_conv(wiit.tab[i]); 
			cur_arg = ft_what_type(flag.conv_num, ap);
			ft_putstr(cur_arg);
//			free(type.tabpw);
			free(cur_arg);
		}
		i++;
	}
//	printf("\n");
	va_end(ap);
	free(wiit.tab);
	return (0);
}
/*
int		main(void)
{
	int		a = 658;
	short int	b = 365000;
	char	c = 496;
	ssize_t	d = 486;
	ft_printf("le test de printf a[%d] b[%hd] c[%hhd] d[%jd]\n", a, b, c, d, NULL);
	return (0);
}
*/
