/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:18:39 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/06 15:20:24 by anreyes          ###   ########.fr       */
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

void	ft_unsnbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_unsnbr(nb / 10);
		ft_unsnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_unslen(unsigned int i)
{
	int	len;

	ft_unsnbr(i);
	if (i <= 0)
		len = 1;
	else
		len = 0;
	while (i)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

// int	ft_u(unsigned int u)
// {
// 	int	i;

// 	i = 0;
// 	if (u >= 0 && u <= 9)
// 		i += ft_putchar(u + '0');
// 	else
// 	{
// 		i += ft_u(u / 10);
// 		i += ft_u(u % 10);
// 	}
// 	return (i);
// }

// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("\n%d\n", ft_unslen(-421));
// }
