#include "libftprintf.h"
/*
#include <stdarg.h>
#include <inttypes.h>
#include <stddef.h>
#include <wchar.h>
#include <sys/types.h>
char		*ft_ctoa(char n);
char		*ft_itoa(int n);
char		*ft_sitoa(short int n);
char		*ft_ssttoa(ssize_t n);
*/
char	*ft_what_type(int n, va_list ap)
{
	if(n == 1)
	{
		return (ft_itoa(va_arg(ap, int)));
	}
	else if (n >= 2 && n <= 5)
	{
		return (ft_uitoa(va_arg(ap, int)));
//		return (va_arg(ap, unsigned int));
//		return (unsigned int);
	}
/*	else if (n == 6)
	{
//		return (ft_itoa(va_arg(ap, int)));
		return (va_arg(ap, int));
//		return (char);
	}
	else if	(n == 7)
	{
//		return (ft_itoa(va_arg(ap, int)));
		return (va_arg(ap, char*));
//		return (char*);
	}
	else if (n == 8)
	{
		return (ft_itoa(va_arg(ap, int)));
		return (va_arg(ap, void*));
//		return (void*);
	}
*/	else if (n == 9)
	{
		return (ft_litoa(va_arg(ap, long int)));
//		return (va_arg(ap, long int));
//		return (long int);
	}
	else if (n >= 10 && n <= 13)
	{
		return (ft_luitoa(va_arg(ap, long unsigned int)));
//		return (va_arg(ap, long unsigned int));
//		return (long unsigned int);
	}
/*	else if (n == 14)
	{
		return (ft_itoa(va_arg(ap, wint_t)));
		return (va_arg(ap, wint_t));
//		return (wint_t);
	}
	else if (n == 15)
	{
		return (ft_itoa(va_arg(ap, int)));
		return (va_arg(ap, wchar_t));
//		return (wchar_t*);
	}
*/	else if (n == 16)
	{
		return (ft_llitoa(va_arg(ap, long long int)));
//		return (va_arg(ap, long long int));
//		return (long long int);
	}
	else if (n >= 17 && n <= 20)
	{
		return (ft_lluitoa(va_arg(ap, long long unsigned int)));
//		return (va_arg(ap, long long unsigned int));
//		return (long long unsigned int);
	}
	else if (n == 21)
	{
		return (ft_sitoa(va_arg(ap, int)));
//		return (ft_sitoa(va_arg(ap, int)));
	}
	else if (n >= 22 && n <= 25)
	{
		return (ft_suitoa(va_arg(ap, unsigned int)));
//		return (va_arg(ap, unsigned int));
//		return (short unsigned int);
	}
	else if (n == 26)
	{
//		return (ft_itoa(va_arg(ap, int)));
		return (ft_ctoa(va_arg(ap, int)));
//		return (char);
	}
	else if (n >= 27 && n <= 30)
	{
		return (ft_uctoa(va_arg(ap, unsigned int)));
//		return (va_arg(ap, unsigned char));
//		return (unsigned char);
	}
	else if (n == 31)
	{
		return (ft_imtoa(va_arg(ap, intmax_t)));
//		return (va_arg(ap, intmax_t));
//		return (intmax_t);
	}
	else if (n >= 32 && n <= 35)
	{
		return (ft_uimtoa(va_arg(ap, uintmax_t)));
//		return (va_arg(ap, uintmax_t));
//		return (uintmax_t);
	}
/*	else if (n == 36)
	{
		return (ft_ssttoa(va_arg(ap, ssize_t)));
//		return (ft_ssttoa(va_arg(ap, ssize_t)));
	}
*/	else if (n >= 37 && n <= 40)
	{
		return (ft_sttoa(va_arg(ap, size_t)));
//		return (va_arg(ap, size_t));
//		return (size_t);
	}
	else
		return (NULL);
}
