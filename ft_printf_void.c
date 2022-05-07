/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_void.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:19:17 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/09 20:01:39 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_void(void *p, int *count)
{
	unsigned long	a;

	a = 0;
	if (p)
		a = (unsigned long)p;
	ft_printf_str("0x", count);
	ft_printf_hexa(a, 'x', count);
}
