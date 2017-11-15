#include <stdio.h>

int		main(void)
{
	void	*g;
	int		a;
	short	b;
	int 	c;
	signed char 	d;
	long long e;
	int		f;
	char	A;
	char	B;
	char	C;
	char	D;
	char	h;

	h = 129;
	a = 1789;
	b = 365000;
	c = -3;
	d = 256;
	e = 5;
	f = 29;
	A = 'a';
	B = 'b';
	C = 'c';
	D = 'd';
//	*g = 16;
	printf("test de {-+10d} || [%-+10d]\n", a);
	printf("test de {1.2d} || [%1.2d]\n", a);
	printf("test de {010d} || [%010d]\n", a);
//	printf("test de {-010d} || [%-010d]\n", a);
//	printf("test de {10-010d} || [%10-010d]\n", a);
	printf("test de { d} || [% d]\n", a);
//	printf("test de {    d} || [%    d]\n", a);
//	printf("test de {    +d} || [%    +d]\n", a);
//	printf("test de {+    d} || [%+    d]\n", a);
//	printf("test de {hhd} || [%hhd]\n", a);
	printf(" celui la test de {hd} || [%hd]\n", b);
	printf("et ce lui ci test de {hhd} || [%hhd]\n", d);
	printf("test de {lld} || [%lld]\n", e);
	printf("test de {hhd} || [%hhd]\n", d);
//	printf("test de {zd} || [%zd]\n", a);
	printf("test de {10d} || [%-10d]\n", c);
	printf("test de {10d} || [%10d]\n", c);
	printf("test de {010d} || [%010d]\n", c);
	printf("test de {-010d} || [%010d]\n", c);
	printf("test de {+010d} || [%+010d]\n", c);
	printf("test de {+d} || [%+d]\n", c);
	printf("test de {+d} || [%+d]\n", b);
//	printf("test de {+10d} || [%+10d]\n", b);
//	printf("test de {+010d} || [%+010d]\n", b);
	printf("test de { d} || [% d]\n", c);
	printf("fopnctionnement de p [%p]", g);
	printf("[%010d]\n", b);
	printf("[%-10d]\n", c);
//	printf("[%010ld]\n", d);
	printf("[%hhd]\n", A);
	printf("[%c]\n", B);
	printf("[%c]\n", C);
	printf("[%c]\n", D);
	printf("[%X]\n", f);
	printf("[%hhd]\n", h);
	return (0);
}
