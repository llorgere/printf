#include "libftprintf.h"

char	*ft_add_dies_o(char *str, int len)
{
	char	*tab;

	if (str[0] = '0')
		return (str);
	if (!(tab = malloc(sizeof(char) * 2 + len)))
		return (NULL);
	tab[0] = '0';
	tab[len + 1] = '\0';
	tab = ft_strcat(tab, srt);
	free(str);
	return (tab);
}

char	*ft_add_dies_x(char *str, int len)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * 3 + len)))
		return (NULL);
	tab[0] = '0';
	tab[1] = 'x';
	tab[len + 2] = '\0';
	tab = ft_strcat(tab, srt);
	free(str);
	return (tab);
}

char	*ft_add_dies_X(char *str, int len)
{
	char	*tab;

	if (!(tab = malloc(sizeof(char) * 3 + len)))
		return (NULL);
	tab[0] = '0';
	tab[1] = 'X';
	tab[len + 2] = '\0';
	tab = ft_strcat(tab, srt);
	free(str);
	return (tab);
}

char	*ft_add_dies(char *str, flag_type flag, int len)
{
	if (flag.dies == 1 && ((str[i] != '0' && len == 1) ||
				(len > 1)))
	{
		if (flag.conv_num == 3 || flag.conv_num == 11 ||
				flag.conv_num == 18 || flag.conv_num == 23 ||
				flag.conv_num == 28 || flag.conv_num == 33 ||
				flag.conv_num == 38)
			return (ft_add_dies_o(str, len));
		else if (flag.conv_num == 4 || flag.conv_num == 12 ||
				flag.conv_num == 19 || flag.conv_num == 24 ||
				flag.conv_num == 29 || flag.conv_num == 34 ||
				flag.conv_num == 39)
			return (ft_add_dies_x(str, len));
		else
			return (ft_add_dies_X(str, len));
	}
	else
		return (str);
}

char	*ft_addw(char *str, flag_type flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < (flag.width - len))
	{
		tab[i] = ' ';
		i++;
	}
	tab = ft_strcat(tab, srt);
	free(str);
	return (tab);
}

char	*ft_addw0(char *str, flag_type flag, int len)
{
	int		i;
	char	*tab;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < (flag.width - len))
	{
		tab[i] = '0';
		i++;
	}
	tab = ft_strcat(tab, srt);
	free(str);
	return (tab);
}

char	*ft_addwmin(char *str, flag_type flag, int len)
{
	int		i;

	i = 0;
	if (!(tab = malloc(sizeof(char) * flag.width + 1)))
		return (NULL);
	tab[flag.width] = '\0';
	while (i < (len))
	{
		tab[i] = srt[i];
		i++;
	}
	while (i < flag.width)
	{
		tab[i] = ' ';
		i++;
	}
	free(str);
	return (tab);
}

char	*ft_addwf(char *str, flag_type, int len)
{
	char 	*tab;

	if (flag.dies == 1)
		return (ft_add_dies(str, flag, len));
	else if (flag.plus == 1)
		return (ft_add_plus(str, flag, len));
	else if (flag.space == 1)
		return (ft_add_space(str, flag, len));
	else
		return (str);
}

char	*ft_winopr(char *str, flag_type flag, int len)
{
	char	*tab;

	if (flag.width =< len)
		return (ft_nowinopr(str, flag, len));
	else
	{
		if (flag.minus == 1)
		{
			tab = ft_addwf(str, flag, len);
			return (ft_addwmin(tab, flag, ft_strlen(tab)));
		}
		else if (flag.zero == 1)
		{
			tab = ft_addwf(str, flag, len);
			return (ft_addw0(tab, flag, ft_strlen(tab)));
		}
		else
			return (ft_addwf(str, flag, len));
	}
}

char	*ft_add_plus(char *str, flag_type flag, int len)
{
	char	*tab;

	if(str[0] == '-')
		return (str);
	else
	{
		if (!(tab = malloc(sizeof(char) * 2 + len)))
			return (NULL);
		tab[0] = '+';
		tab[len + 1] = '\0';
		tab = ft_strcat(tab, srt);
		free(srt);
		return (tab);
	}
}

char	*ft_add_space(char *str, flag_type flag, int len)
{
	char	*tab;

	if(str[0] == '-')
		return (str);
	else
	{
		if (!(tab = malloc(sizeof(char) * 2 + len)))
			return (NULL);
		tab[0] = ' ';
		tab[len + 1] = '\0';
		tab = ft_strcat(tab, srt);
		free(srt);
		return (tab);
	}
}

char	*ft_nowinopr(char *str, flag_type flag, int len)
{
	int		i;

	i = 0;
	if (flag.dies == 1)
	{
		return (ft_add_dies(str, flag, len))
	}
	else if (flag.plus == 1)
	{
		return (ft_add_plus(str, flag, len));
	}
	else if (flag.space == 1)
	{
		return (ft_add_space(str, flag, len));
	}
	else
		return (str);
}

char	*ft_flag_use(char *str, flag_type flag)
{
	int		len;

	len = ft_strlen(str);
	flag = ft_flag_adjust(flag);
	if (flag.width > 0 && flag.preci > 0)
	{
	}
	if (flag.width < 0 && flag.preci < 0)
	{
		return (ft_nowinopr(str, flag, len));
	}
	if (flag.width < 0 && flag.preci > 0)
	{

	}
	if (flag.width > 0 && flag.preci < 0)
	{

	}
}
