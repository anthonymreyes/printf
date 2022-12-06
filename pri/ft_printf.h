/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anreyes <anreyes@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:41:04 by anreyes           #+#    #+#             */
/*   Updated: 2022/11/27 14:41:04 by anreyes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_u(unsigned int u);
int	ft_pointer(unsigned long p);
int	ft_hex(unsigned int x, int b);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
#endif
