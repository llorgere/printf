#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	int 		a;
	long int 	b;
	long long int c;

	a = 1789;
	b = -2999900;
	c = -989849849452;

	printf("test de a pour d [%-10.6d]\n", a);
	printf("test de a pour o [%o]\n", a);
	printf("test de a pour u [%u]\n", a);
	printf("test de a pour x [%x]\n", a);
	printf("test de a pour X [%X]\n", a);
	ft_printf("test de a pour d [%-10.6d]\n", a);
	ft_printf("test de a pour o [%o]\n", a);
	ft_printf("test de a pour u [%u]\n", a);
	ft_printf("test de a pour x [%x]\n", a);
	ft_printf("test de a pour X [%X]\n", a);
	printf("test de b pour ld [%ld]\n", b);
	printf("test de b pour lo [%lo]\n", b);
	printf("test de b pour lu [%lu]\n", b);
	printf("test de b pour lx [%lx]\n", b);
	printf("test de b pour lX [%lX]\n", b);
	ft_printf("test de b pour ld [%ld]\n", b);
	ft_printf("test de b pour lo [%lo]\n", b);
	ft_printf("test de b pour lu [%lu]\n", b);
	ft_printf("test de b pour lx [%lx]\n", b);
	ft_printf("test de b pour lX [%lX]\n", b);
	printf("test de c pour lld [%lld]\n", c);
	printf("test de c pour llo [%llo]\n", c);
	printf("test de c pour llu [%llu]\n", c);
	printf("test de c pour llx [%llx]\n", c);
	printf("test de c pour llX [%llX]\n", c);
	ft_printf("test de c pour lld [%lld]\n", c);
	ft_printf("test de c pour llo [%llo]\n", c);
	ft_printf("test de c pour llu [%llu]\n", c);
	ft_printf("test de c pour llx [%llx]\n", c);
	ft_printf("test de c pour llX [%llX]\n", c);
	printf("test de a pour d [%d]\n");
	printf("test de a pour o [%o]\n");
	printf("test de a pour u [%u]\n");
	printf("test de a pour x [%x]\n");
	printf("test de a pour X [%X]\n");
	ft_printf("test de a pour d [%d]\n");
	ft_printf("test de a pour o [%o]\n");
	ft_printf("test de a pour u [%u]\n");
	ft_printf("test de a pour x [%x]\n");
	ft_printf("test de a pour X [%X]\n");
	printf("test de a pour d [%d]\n", a, b, c, a, c, b);
	printf("test de a pour o [%o]\n", a, b);
	printf("test de a pour u [%u]\n", a, b);
	printf("test de a pour x [%x]\n", a, b);
	printf("test de a pour X [%X]\n", a, b);
	ft_printf("test de a pour d [%d]\n", a, b, c, a, c, b);
	ft_printf("test de a pour o [%o]\n", a, b);
	ft_printf("test de a pour u [%u]\n", a, b);
	ft_printf("test de a pour x [%x]\n", a, b);
	ft_printf("test de a pour X [%X]\n", a, b);
	printf("test de a pour d \n", a);
	printf("test de a pour o \n", a);
	printf("test de a pour u \n", a);
	printf("test de a pour x \n", a);
	printf("test de a pour X \n", a);
	ft_printf("test de a pour d \n", a);
	ft_printf("test de a pour o \n", a);
	ft_printf("test de a pour u \n", a);
	ft_printf("test de a pour x \n", a);
	ft_printf("test de a pour X \n", a);
	return (0);
}
