/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:08:45 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/06 15:20:02 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		write(1, "(null)", 1);
		return (6);
	}
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf ("%d\n", ft_putstr ("statement"));
// }