#include <stdio.h>
#include <stdlib.h>

int			ft_what_conv(char *str, int posi)
{
	int		len;

	len = ft_strlen(str);
	if (len == 1)
	{

	}
}

char		*ft_arg_conv(char *tab)
{
	int		i;
	int		tmp;
	int		conv_num;
	int		width;
	int		preci;
	int		flag_minus;
	int		flag_plus;
	int		flag_dies;
	int		flag_zero;
	int		flag_space;
	int		flag_point;
	char 	*tabpw;

	i = 0;
	tmp = 0;
	conv_num = 0;
	width = 0;
	preci = 0;
	flag_minus = 0;
	flag_plus = 0;
	flag_dies = 0;
	flag_zero = 0;
	flag_space = 0;
	flag_point = 0;

	if (tab[i] == '-')
	{
		flag_minus++;
		i++;
	}
	if (tab[i] == '+')
	{
		flag_plus++;
		i++;
	}
	if (tab[i] == ' ')
	{
		flag_space++;
		i++;
	}
	if (tab[i] == '0')
	{
		flag_zero++;
		i++;
	}
	if (tab[i] == '#')
	{
		flag_dies++;
		i++;
	}
	if (tab[i] != '0')
	{
		tmp = i;
		while (tab[i] >= '0' && tab[i] <= '9')
			i++;
		tabpw = ft_strndup(tab + tmp, i - tmp + 1);
		width = ft_atoi(tabpw);
		free(tabw);
	}
	if (tab[i] == '.')
	{
		i++
		tmp = i;
		while (tab[i] >= '0' && tab[i] <= '9')
			i++;
		tabpw = ft_strndup(tab + tmp, i - tmp + 1);
		preci = ft_atoi(tabpw);
		free(tabw);
	}
}
