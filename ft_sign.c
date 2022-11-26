/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:18:39 by anreyes           #+#    #+#             */
/*   Updated: 2022/11/24 15:39:31 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(unsigned int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_len(int i)
{
	int	len;

	ft_putnbr(i);
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

#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	printf("\n%d\n",ft_len(-421));
}
