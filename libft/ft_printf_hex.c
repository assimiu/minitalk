/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:18:39 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 07:33:31 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned int nb, char c)
{
	size_t	i;
	char	*hex;

	i = 0;
	if (c == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	i = 0;
	if (nb <= 15)
		i += ft_printchar(hex[nb]);
	else
	{
		i += ft_printf_hex(nb / 16, c);
		i += ft_printf_hex(nb % 16, c);
	}
	return (i);
}
