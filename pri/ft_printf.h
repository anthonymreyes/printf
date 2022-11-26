#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <io.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_u(unsigned int u);
int	ft_pointer(unsigned long p);
int	ft_hex(unsigned int x, int b);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
#endif
