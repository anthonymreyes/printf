/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:52:17 by anreyes           #+#    #+#             */
/*   Updated: 2022/12/09 16:26:51 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *st, ...);
int		ft_putchar(char c);
int		ft_intlen(int i);
int		ft_putstr(char *c);
int		ft_hexa(unsigned int i);
int		ft_hexa_u(unsigned int i);
int		ft_unslen(unsigned int i);
void	ft_unsnbr(unsigned int nb);
int		ft_pointer(unsigned long n);
int		ft_putpointer(unsigned long n);

#endif