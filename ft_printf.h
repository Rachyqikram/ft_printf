/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irachyq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:13:41 by irachyq           #+#    #+#             */
/*   Updated: 2021/12/09 20:08:01 by irachyq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const	char *str, ...);
void	ft_printf_char(char c, int	*count);
void	ft_printf_nbr(int n, int *count);
void	ft_printf_hexa(unsigned long n, char format, int *count);
void	ft_printf_str(char *str, int *count);
void	ft_printf_u(unsigned int i, int *count);
void	ft_printf_void(void *p, int *count);
#endif
