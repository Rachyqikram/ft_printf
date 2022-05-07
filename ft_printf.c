/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:12:32 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/11 01:06:25 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_check(va_list ap, char str, int *count)
{
	if (str == 'c')
		ft_printf_char(va_arg(ap, int), count);
	else if (str == 'd' || str == 'i')
		ft_printf_nbr(va_arg(ap, int), count);
	else if (str == 'x' || str == 'X')
		ft_printf_hexa(va_arg(ap, unsigned int), str, count);
	else if (str == '%')
		ft_printf_char(str, count);
	else if (str == 's')
		ft_printf_str(va_arg(ap, char *), count);
	else if (str == 'p')
		ft_printf_void(va_arg(ap, void *), count);
	else if (str == 'u')
		ft_printf_u(va_arg(ap, unsigned int), count);
	else
		ft_printf_char(str, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(ap, str[i], &count);
		}
		else
			ft_printf_char(str[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
