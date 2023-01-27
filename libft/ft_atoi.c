/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:06:09 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 17:05:39 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sinal;
	long long	retorno;

	sinal = 1;
	retorno = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sinal *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		retorno = retorno * 10;
		retorno += (sinal * (*(str++) - '0'));
		if (retorno > 2147483647)
			return (-1);
		if (retorno < -2147483648)
			return (0);
	}
	return (retorno);
}
