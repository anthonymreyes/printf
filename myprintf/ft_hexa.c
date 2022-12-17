/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:58:16 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/17 12:38:11 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
