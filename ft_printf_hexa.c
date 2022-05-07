/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:20:00 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/09 19:59:00 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexa(unsigned long n, char format, int *count)
{
	if (n >= 16)
	{
		ft_printf_hexa(n / 16, format, count);
		ft_printf_hexa(n % 16, format, count);
	}
	else if (n <= 9)
		ft_printf_char(n + '0', count);
	else
	{
		if (format == 'X')
			ft_printf_char(n + 55, count);
		else
			ft_printf_char(n + 87, count);
	}
}
