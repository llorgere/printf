#include <stdarg.h>
char 	*ft_what_type(const char *format)
{
	int
}

int		ft_printf(const char *format, ...)
{
	va_list		arg;
	int			nb_arg;
	int			i;
	char		*cur_arg = format;
	
	nb_arg = 0;
	if (format == NULL)
	{
		printf("pas d'arguments");
		return (-1);
	}
	va_start(ap, format);
	while (cur_arg != NULL)
	{
		nb_arg++;
		cur_arg = va_arg(ap, char*);
	}
}
