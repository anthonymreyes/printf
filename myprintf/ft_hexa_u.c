/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:48:41 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/10 18:37:27 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hexa_u_out(unsigned int n)
{
	if ((n / 16) > 0)
	{
		hexa_u_out(n / 16);
	}
	if ((n % 16) >= 10 && (n % 16) <= 16)
	{
		ft_putchar((n % 16) + 55);
	}
	else
	{
		ft_putchar((n % 16) + 48);
	}
}

int	ft_hexa_u(unsigned int i)
{
	int	len;

	len = 0;
	hexa_u_out(i);
	if (i == 0)
		len = 1;
	while (i)
	{
		i = i / 16;
		len++;
	}
	return (len);
}
// void	ft_putnbr_uchex(unsigned int n)
// {
// 	if (n / 16 > 0)
// 	{
// 		ft_putnbr_uchex(n / 16);
// 	}
// 	if ((n % 16) >= 10 && (n % 16) < 16)
// 	{
// 		ft_putchar((n % 16) + 55);
// 	}
// 	else
// 		ft_putchar((n % 16) + 48);
// }

// int	ft_hexa_u(unsigned int i)
// {
// 	int				len;

// 	len = 0;
// 	ft_putnbr_uchex(i);
// 	if (i == 0)
// 		len = 1;
// 	while (i)
// 	{
// 		i = i / 16;
// 		len++;
// 	}
// 	return (len);
// }
