#include "libft.h"
#include "libftprintf.h"

static char	*ft_lluitoa_malloc(long long unsigned int n, int j)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	if (n < 0)
	{
		tab[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		tab[j - 1] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	return (tab);
}

char		*ft_lluitoa(long long unsigned int n)
{
	long long unsigned int	i;
	int						j;

	i = n;
	j = 0;
	while (i > 0)
	{
		i = i / 10;
		j++;
	}
	return (ft_lluitoa_malloc(n, j));
}
