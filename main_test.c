#include <stdio.h>
#include <stdlib.h>
char	**ft_watinit(const char *str, int sizetab);
int		ft_size_tab(const char *str);
char	*ft_strndup(const char *s, size_t n);

int		main(void)
{
	const char	*str = "salut les copains %.+3d dwadi %% awd %deyt";
//	const char	*str = "salut les copains";
	int			st;
	char		**tab;
	int 		i;
//	char	*tmp;

//	tmp = str;
	i = 0;
	st = 0;
	st = ft_size_tab(str);
	printf("st est %d\n", st);
	tab = ft_watinit(str, st);
	printf("watinit bien passe dans le main");
	while (tab[i] != '\0')
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
