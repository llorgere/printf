#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stddef.h>
#include <wchar.h>
#include <sys/types.h>

char	*ft_what_type(unsigned int n, va_list ap);

int		ft_type_arg(int n)
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

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			nb_args;
	int			i;
	int 		j;
	int			type;
//	type		wtype;
	char		*cur_arg = (char *)format;
	
	j = 1;
	i = 0;
	nb_args = 0;
	if (format == NULL)
	{
		printf("pas d'arguments");
		return (-1);
	}
	va_start(ap, format);
	while (cur_arg != NULL)
	{
		nb_args++;
		type = ft_type_arg(i);
//		wtype = ft_what_type(type);
		cur_arg = ft_what_type(type, ap);
		printf("test de va_arg de la premiere boucle cur_arg est : [%s]\n", cur_arg);
		free(cur_arg);
		i++;
	}
	va_end(ap);
	i = 0;
	printf("%s", format);
	va_start(ap, format);
	while(j < nb_args)
	{
		j++;
		type = ft_type_arg(i);
		printf(" %s ", cur_arg = ft_what_type(type, ap));
		free(cur_arg);
		i++;
	}
	printf("\n");
	va_end(ap);
	return (0);
}

int		main(void)
{
	int		a = 658;
	short int	b = 25;
	char	c = 124;
	ssize_t	d = 486;
	ft_printf("le test de printf est", a, b, c, d, NULL);
	return (0);
}
