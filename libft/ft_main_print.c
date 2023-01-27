/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:31:29 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 18:44:47 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(va_list list, char c)
{
	size_t	i;

	i = 0;
	if (c == 'c')
		i = ft_printchar(va_arg(list, int));
	else if (c == 's')
		i = ft_printstr(va_arg(list, char *));
	else if (c == 'i' || c == 'd')
		i = ft_printnbr(va_arg(list, int));
	else if (c == 'u')
		i = ft_unsigned_int(va_arg(list, unsigned int));
	else if (c == 'x' || c == 'X')
		i = ft_printf_hex(va_arg(list, unsigned int), c);
	else if (c == 'p')
		i = ft_print_pointer(va_arg(list, unsigned long long));
	else if (c == '%')
		i = ft_printchar('%');
	return (i);
}

int	ft_main_print(va_list list, const char *str)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '%')
			result += ft_print_format(list, str[++i]);
		else
			result += ft_printchar(str[i]);
		i ++;
	}
	return (result);
}
