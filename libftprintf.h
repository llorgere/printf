#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "libft/libft.h"
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <inttypes.h>
# include <stddef.h>
# include <sys/types.h>
# include <stdarg.h>

typedef struct
{
	int		tmp;
	int		conv_num;
	int		width;
	int		preci;
	int		minus;
	int		plus;
	int		dies;
	int		zero;
	int		space;
	int		point;
	char 	*tabpw;

}			flag_type;
typedef struct
{
	int		pos_conv;
	char	**tab;
	int		sizetab;
}			conv_type;
typedef struct
{
	int		nb_conv;
	int		*pos_conv;
	char	**tab;
}			wii;
wii			ft_watinit(const char *arg0, int sizetab);
int			ft_size_tab(const char *str);
char		*ft_arg_conv(char *tab);
int			ft_what_conv(char *str);
int			ft_three_conv(char *str);
int			ft_two_conv(char *str);
int			ft_one_conv(char *str);
int			ft_two_j_conv(char *str);
int			ft_two_z_conv(char *str);
int			ft_two_h_conv(char *str);
int			ft_two_l_conv(char *str);
int			ft_three_l_conv(char *str);
int			ft_three_h_conv(char *str);
int			ft_printf(const char *format, ...);
char		*ft_ctoa(char n);
char		*ft_itoa(int n);
char		*ft_litoa(long int n);
char		*ft_llitoa(long long int n);
char		*ft_imtoa(intmax_t n);
char		*ft_sitoa(short int n);
char		*ft_sstoa(ssize_t n);
char		*ft_ch_to_hex_low(unsigned char n);
char		*ft_ch_to_hex_up(unsigned char n);
char		*ft_ch_to_octal(unsigned char n);
char		*ft_uctoa(unsigned char n);
char		*ft_uimtoa(uintmax_t n);
char		*ft_uim_to_hex_low(uintmax_t n);
char		*ft_uim_to_hex_up(uintmax_t n);
char		*ft_uim_to_octal(uintmax_t n);
char		*ft_int_to_octal(unsigned int n);
char		*ft_uitoa(unsigned int n);
char		*ft_int_to_hex_up(unsigned int n);
char		*ft_int_to_hex_low(unsigned int n);
char		*ft_lg_to_octal(unsigned long int n);
char		*ft_lg_to_hex_low(unsigned long int n);
char		*ft_lg_to_hex_up(unsigned long int n);
char		*ft_luitoa(unsigned long int n);
char		*ft_lluitoa(unsigned long long int n);
char		*ft_llg_to_hex_up(unsigned long long int n);
char		*ft_llg_to_hex_low(unsigned long long int n);
char		*ft_sh_to_octal(unsigned short int n);
char		*ft_sh_to_hex_low(unsigned short int n);
char		*ft_sh_to_hex_up(unsigned short int n);
char		*ft_suitoa(unsigned short int n);
char		*ft_sttoa(size_t n);
char		*ft_st_to_hex_up(size_t n);
char		*ft_st_to_hex_low(size_t n);
char		*ft_st_to_octal(size_t n);
#endif
