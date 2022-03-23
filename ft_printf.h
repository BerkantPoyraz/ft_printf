
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_strchecker(va_list arg, int g);
int		ft_uitoa(unsigned int u);
int		print_arry(char *str);
int		ft_bsm_say(unsigned int b);
int		printer_ptr(unsigned long x);
int		print_ptr(unsigned long n);
int		print_hex(unsigned int n, char c);
int		ft_putchar_vol2(char c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif