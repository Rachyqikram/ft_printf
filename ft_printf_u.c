/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:47:41 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/09 17:46:36 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(unsigned int i, int *count)
{
	if (i >= 10)
	{
		ft_printf_nbr(i / 10, count);
		ft_printf_nbr(i % 10, count);
	}
	else
		ft_printf_char(i + '0', count);
}
