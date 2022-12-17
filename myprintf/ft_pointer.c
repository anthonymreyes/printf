/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:36:56 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/17 12:39:01 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_pointer(unsigned long n)
{
	int	count;

	if (n == 0)
		return (ft_putstr("0x0"));
	else
		count = ft_putstr("0x") + ft_putpointer(n);
	return (count);
}
