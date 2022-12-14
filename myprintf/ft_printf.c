/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:30:48 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/17 12:39:43 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_length(char ch, va_list list)
{
	int	length;

	length = 0;
	if (ch == 'c')
		length += ft_putchar(va_arg(list, int));
	else if (ch == 's')
		length += ft_putstr(va_arg(list, char *));
	else if (ch == 'p')
		length += ft_pointer(va_arg(list, unsigned long));
	else if (ch == 'd' || ch == 'i')
		length += ft_intlen(va_arg(list, int));
	else if (ch == 'u')
		length += ft_unslen(va_arg(list, unsigned int));
	else if (ch == 'x')
		length += ft_hexa(va_arg(list, unsigned int));
	else if (ch == 'X')
		length += ft_hexa_u(va_arg(list, unsigned int));
	else
		length += ft_putchar(ch);
	return (length);
}

int	ft_printf(const char *st, ...)
{
	va_list	list;
	int		i;
	int		tot_len;

	i = 0;
	tot_len = 0;
	va_start(list, st);
	while (st[i] != '\0')
	{
		if (st[i] == '%')
		{
			tot_len += ft_length(st[i + 1], list);
			i++;
		}
		else
			tot_len += ft_putchar(st[i]);
		i++;
	}
	va_end(list);
	return (tot_len);
}
