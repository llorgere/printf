#include "libftprintf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	flag_type	flag;
	wii			wiit;
	char		*cur_arg = (char *)format;
	
	i = 0;
	if (format == NULL)
		return (-1);
	wiit = ft_watinit(format, ft_size_tab(format));
	va_start(ap, format);
	while(wiit.tab[i])
	{
		if (wiit.pos_conv[i] == 0)
			ft_putstr(wiit.tab[i]);
		else if (wiit.pos_conv[i] == 1)
		{
			flag = ft_arg_conv(wiit.tab[i]); 
			cur_arg = ft_what_type(flag.conv_num, ap);
			cur_arg = ft_flag_use(cur_arg, flag);
			ft_putstr(cur_arg);
			free(cur_arg);
		}
		i++;
	}
	va_end(ap);
	free(wiit.tab);
	return (0);
}
