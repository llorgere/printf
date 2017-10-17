#include <stdio.h>
#include <stdlib.h>
char	**ft_watinit(const char *arg0, int sizetab);
int		ft_size_tab(char *arg0);
char	*ft_strndup(const char *s, size_t n);

char	**ft_watinit(const char *arg0, int sizetab)
{
	int			i;
	int			j;
	int			k;
//	int		nb_conv;
//	int		*pos_conv;
	const char 	*tmp;
	char		**tab;

	i = 0;
	j = 0;
	k = 0;
	printf("arg0 est [%s]", arg0);
//	nb_conv = 0;
//	pos_conv = malloc(sizeof(int) * (sizetab + 1));
//	pos_conv[sizetab] = -1;
	tab = malloc(sizeof(char *) * (sizetab + 1));
	tmp = arg0;
	printf("tmp est [%s]", tmp);
	tab[sizetab] = malloc(sizeof(char) * 1);
	tab[sizetab] = '\0';
//	printf("tmp est [%s]", tmp);
	while (tmp[i] != '\0')
	{
		while (tmp[i] != '%' && tmp[i] != '\0')
		{
			i++;
			if (tmp[i] == '\0' || tmp[i] != '%')
			{
				tab[j] = ft_strndup(tmp, (size_t)i);
//				pos_conv[j] = 0;
				printf("ft_watinit 1 || tab[j] est [%s]\n", tab[j - 1]);
				j++;
			}
		}
		if (tmp[i] == '\0')
		{
//			tab[j] = '\0';
			return (tab);
		}
		else if (tmp[i] == '%' && tmp[i + 1] == '%')
		{
			tab[j] = malloc(sizeof(char) * 2);
			tab[j][0] = '%';
			tab[j][1] = '\0';
			i = i + 2;
//			pos_conv[j] = 0;
			printf("ft_watinit 1 || tab[j] est [%s]", tab[j]);
			j++;
		}
		else if (tmp[i] == '%')
		{
			k = i;
			while (tmp[i] != 'd' && tmp[i] != 'i' && tmp[i] != 's' && tmp[i] != 'p' && tmp[i] != 'S' && tmp[i] !='D' && tmp[i] !='U' && tmp[i] !='O' && tmp[i] != 'o' && tmp[i] !='u' && tmp[i] !='x' && tmp[i] !='X' && tmp[i] !='c' && tmp[i] !='C'  && tmp[i] !='\0')
			{
				i++;
				printf("test de la boucle %%\n");
			}
			tab[j] = ft_strndup(tmp + k, (i - k));
//			nb_conv++;
//			pos_conv[j] = 1;
			j++;
// cas d'erreur ou % pas suivi de conversion
			if (tmp[i] == '\0')
			{
//				tab[j] = '\0';
				return (tab);
			}
		}
		else
			i++;
	}
//	tab[j] = '\0';
	return (tab);
}
