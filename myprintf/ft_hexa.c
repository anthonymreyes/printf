/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:58:16 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/16 17:32:53 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }
#include "ft_printf.h"

void	hexa_out(unsigned int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if ((n / 16) > 0)
	{
		hexa_out(n / 16);
	}
	if ((n % 16) >= 10 && (n % 16) < 16)
	{
		ft_putchar((n % 16) + 87);
	}
	else
	{
		ft_putchar((n % 16) + 48);
	}
}

int	ft_hexa(unsigned int i)
{
	int	len;

	len = 0;
	hexa_out(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 16;
		len++;
	}
	return (len);
}
// void	ft_putnbr_lchex(unsigned int n)
// {
// 	if (n / 16 > 0)
// 	{
// 		ft_putnbr_lchex(n / 16);
// 	}
// 	if ((n % 16) >= 10 && (n % 16) < 16)
// 	{
// 		ft_putchar((n % 16) + 87);
// 	}
// 	else
// 		ft_putchar((n % 16) + 48);
// }

// int	ft_hexa(unsigned int i)
// {
// 	int				len;

// 	len = 0;
// 	ft_putnbr_lchex(i);
// 	if (i == 0)
// 		len = 1;
// 	while (i)
// 	{
// 		i = i / 16;
// 		len++;
// 	}
// 	return (len);
// }

// int	ft_hexa(unsigned int x, int b)
// {
// 	int	i;

// 	i = 0;
// 	if (x >= 16)
// 		i += ft_hexa(x / 16, b);
// 	if ((x % 16) < 10)
// 		i += ft_putchar((x % 16) + '0');
// 	else
// 	{
// 		if (b == 0)
// 			i += ft_putchar((x % 16) + 87);
// 		else
// 			i += ft_putchar((x % 16) + 55);
// 	}
// 		return (i);
// }

// int	main(void)
// {
// 	int	test = 41;
// 	printf("\n%s\n", ft_hexa(test));
// }