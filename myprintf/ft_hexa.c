/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:58:16 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/06 15:25:00 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }
#include "ft_printf.h"

int	ft_hexa(unsigned int x, int b)
{
	int	i;

	i = 0;
	if (x >= 16)
		i += ft_hexa(x / 16, b);
	if ((x % 16) < 10)
		i += ft_putchar((x % 16) + '0');
	else
	{
		if (b == 0)
			i += ft_putchar((x % 16) + 87);
		else
			i += ft_putchar((x % 16) + 55);
	}
	return (i);
}

// int	main(void)
// {
// 	int	test = 41;
// 	printf("\n%s\n", ft_hexa(test));
// }