#include <stdio.h>
#include <wchar.h>
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
	wint_t	i;
	const wchar_t *j;
	void	*k;
	char 	*z = "Salut\n";
	int 	y = 'q';
	unsigned int 	m;

	i = L'K';
	m = 69;
	j = L"salut les putes\n";
//	&k = 65;
	h = 129;
	a = 1789;
	b = 32768;
	c = -3;
	d = 25;
	e = 5;
	f = 29;
	A = 'a';
	B = 'b';
	C = 'c';
	D = 'd';
//	*g = 16;
	printf("test de {+.10d} || [%10.6#d]\n", a);
	printf("test de {+010d} || [%+10d]\n", a);
	printf("test de {- 10d} || [%- 10d]\n", a);
	printf("test de {-+ 0#10x} || [%#+-010.6x]\n", a);
	printf("test de {1.2d} || [%1.2d]\n", a);
	printf("test de {10.6d} || [%00.d]\n", a);
//	printf("test de {-010d} || [%-010d]\n", a);
//	printf("test de {10-010d} || [%10-010d]\n", a);
	printf("test de { d} || [% d]\n", a);
//	printf("test de {    d} || [%    d]\n", a);
//	printf("test de {    +d} || [%    +d]\n", a);
//	printf("test de {+    d} || [%+    d]\n", a);
//	printf("test de {hhd} || [%hhd]\n", a);
	printf(" celui la test de {hd} || [%hu]\n", b);
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
	printf("fonctionnement de p [%p]\n", k);
	printf("[%010d]\n", b);
	printf("[%-10d]\n", c);
//	printf("[%010ld]\n", d);
	printf("[%hhd]\n", A);
	printf("[%c]\n", B);
	printf("[%c]\n", C);
	printf("[%c]\n", D);
	printf("[%X]\n", f);
	printf("[%hhd]\n", h);
	printf("test de lc [%lc]\n", i);
	printf("test de ls [%ls]\n", j);
	printf("test de p [%p]\n", g);
	printf("test z de {-+ 0#10x} || [%-+ 0#10s]\n", z);
	printf("test y de {-+ 010x} || [%-+ 010c]\n", y);
	printf("test j de {-+ 0#10.5x} || [%-+ 0#26.5ls]\n", j);
	printf("test i de {-+ 0#10x} || [%-+ 0#10lc]\n", i);
	printf("test de #x pour 0 [%#10.5x]", m);
	printf("test de #o pour 0 [%#10.5o]", m);
	printf("test de precision sur nombre negatif [%10d]", c);
	return (0);
}
