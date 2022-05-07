/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:39:53 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/09 17:44:10 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_nbr(int n, int *count)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_printf_char('-', count);
		i *= -1;
	}	
	if (i >= 10)
	{
		ft_printf_nbr(i / 10, count);
		ft_printf_nbr(i % 10, count);
	}
	else
		ft_printf_char(i + '0', count);
}
