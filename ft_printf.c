#include "libftprintf.h"
#include <stdio.h>

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	flag_type	flag;
	wii			wiit;
	char		*cur_arg = (char *)format;
	int			ret;
	
	ret = 0;
	i = 0;
	if (format == NULL)
		return (-1);
	wiit = ft_watinit(format, ft_size_tab(format));
	va_start(ap, format);
	while(wiit.tab[i])
	{
		if (wiit.pos_conv[i] == 0)
		{
			ret = ret + ft_strlen(wiit.tab[i]);
			ft_putstr(wiit.tab[i]);
		}
		else if (wiit.pos_conv[i] == 1)
		{
			flag = ft_arg_conv(wiit.tab[i]); 
//			printf("test des valeurs des flags\ncn : [%d] | wi : [%d] | pr : [%d] | - : [%d] | + : [%d] | # : [%d] | 0 : [%d] | sp : [%d] | . : [%d] |\n", flag.conv_num, flag.width, flag.preci, flag.minus, flag.plus, flag.dies, flag.zero, flag.space, flag.point);
			cur_arg = ft_what_type(flag.conv_num, ap);
		//	printf("str est [%s]\n", cur_arg);
			if(flag.conv_num == -1)
				cur_arg = ft_strdup(wiit.tab[i]);
			else
				cur_arg = ft_flag_use(cur_arg, flag);
			ret = ret + ft_strlen(cur_arg);
			ft_putstr(cur_arg);
			free(cur_arg);
		}
		i++;
	}
	va_end(ap);
	free(wiit.tab);
	return (ret);
}
