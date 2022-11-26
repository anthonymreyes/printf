#include "ft_printf.h"

int	ft_check(char c, va_list arg)
{
	int	p;

	p = 0;
	if (c == 'c')
		p += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		p += ft_putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		p += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		p += ft_u(va_arg(arg, unsigned int));
	else if (c == 'x')
		p += ft_hex(va_arg(arg, unsigned int), 0);
	else if (c == 'X')
		p += ft_hex(va_arg(arg, unsigned int), 1);
	else if (c == 'p')
	{
		p += ft_putstr("0x");
		p += ft_pointer(va_arg(arg, unsigned long));
	}
	else if (c == '%')
		p += ft_putchar('%');
	else
		return (ft_putchar(c));
	return (p);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		check;

	va_start(arg, str);
	i = 0;
	check = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			check++;
		}
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ' && str[i])
				i++;
			check += ft_check(str[i], arg);
		}
		i++;
	}
	va_end(arg);
	return (check);
}

int main(void)
{
	// int i = 0;
	// i = ft_printf("%s %d hello %p", "world", 123, 142253697);
	printf("\n%d\n", ft_printf("%s %d hello %p", "world", 123, 142253697));
}
