/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:08:45 by anreyes           #+#    #+#             */
/*   Updated: 2022/11/25 15:26:18 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_putstr (char *c)
{
	int	i;
	i = 0;
	
	while (c[i] != '\0')
	{
		write (1, &c[i], 1);
		i++;	
	}
	return(i);
	
}

#include <stdio.h>
int	main(void)
{
	printf ("%d\n", ft_putstr ("statement"));
}