/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:36:56 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/06 15:19:30 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

// int	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

// int	ft_putstr(char *c)
// {
// 	int	i;

// 	i = 0;
// 	if (c == NULL)
// 	{
// 		write(1, "(null)", 1);
// 		return (6);
// 	}
// 	while (c[i] != '\0')
// 	{
// 		write (1, &c[i], 1);
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_pointer(unsigned long p)
// {
// 	int	i;

// 	i = 0;
// 	if (p >= 16)
// 		i += ft_pointer(p / 16);
// 	if ((p % 16) < 10)
// 		i += ft_putchar((p % 16) + '0');
// 	else
// 		i += ft_putchar((p % 16) + 87);
// 	return (i);
// }

int	ft_putpointer(unsigned long n)
{
	int		count;
	char	*hex;

	count = 1;
	hex = "0123456789abcdef";
	if (n > 15)
		count += ft_putpointer(n / 16);
	ft_putchar(hex[n % 16]);
	return (count);
}

// 41 / 16 = 2.5625
// 41 % 16 = 0.5625

// 0.5625 * 16 = 9
// hex[9]

int	ft_pointer(unsigned long n)
{
	int	count;

	if (n == 0)
		return (ft_putstr("0x0"));
	else
		count = ft_putstr("0x") + ft_putpointer(n);
	return (count);
}

// int	main(void)
// {
// 	int	test = 41;
// 	printf("\n%d\n", ft_pointer(test));
// }