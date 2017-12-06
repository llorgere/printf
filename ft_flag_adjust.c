#include <libftprintf.h>

flag_type	ft_flag_adjust(flag_type flag)
{
	if (flag.zero == 1 && flag.minus == 1)
		flag.zero = 0;
	if (flag.space == 1 && flag.plus == 1)
		flag.space = 0;
	if (flag.dies == 1 && ((flag.conv_num <= 3 && flag.conv_num >= 5) ||
			(flag.conv_num <= 11 && flag.conv_num >= 13) ||
			(flag.conv_num <= 18 && flag.conv_num >= 20) ||
			(flag.conv_num <= 23 && flag.conv_num >= 25) ||
			(flag.conv_num <= 28 && flag.conv_num >= 30) ||
			(flag.conv_num <= 33 && flag.conv_num >= 35) ||
			(flag.conv_num <= 38 && flag.conv_num >= 40)))
		flag.dies = 0;
	if (flag.plus == 1 && ((flag.conv_num >= 2 && flag.conv_num <= 7) ||
			(flag.conv_num >= 10 && flag.conv_num <= 15) ||
			(flag.conv_num >= 17 && flag.conv_num <= 20) ||
			(flag.conv_num >= 22 && flag.conv_num <= 25) ||
			(flag.conv_num >= 27 && flag.conv_num <= 30) ||
			(flag.conv_num >= 32 && flag.conv_num <= 35) ||
			(flag.conv_num >= 37 && flag.conv_num <= 40)))
		flag.plus = 0;
	if (flag.space == 1 && ((flag.conv_num >= 2 && flag.conv_num <= 7) ||
			(flag.conv_num >= 10 && flag.conv_num <= 15) ||
			(flag.conv_num >= 17 && flag.conv_num <= 20) ||
			(flag.conv_num >= 22 && flag.conv_num <= 25) ||
			(flag.conv_num >= 27 && flag.conv_num <= 30) ||
			(flag.conv_num >= 32 && flag.conv_num <= 35) ||
			(flag.conv_num >= 37 && flag.conv_num <= 40)))
		flag.space = 0;
	if (flag.zero == 1 && ((flag.conv_num == 6) || (flag.conv_num == 7) ||
			(flag.conv_num == 14) || (flag.conv_num == 15)))
		flag.zero = 0;
	return (flag);
}
