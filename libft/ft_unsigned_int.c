/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 07:36:44 by amane             #+#    #+#             */
/*   Updated: 2022/03/14 16:16:02 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_int(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb <= 9)
	{
		ft_printchar('0' + nb);
		return (1);
	}
	i += ft_unsigned_int(nb / 10);
	i += ft_unsigned_int(nb % 10);
	return (i);
}
