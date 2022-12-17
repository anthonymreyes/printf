/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:18:39 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/17 12:40:20 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
