/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:10:29 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 15:11:38 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alocacao;

	alocacao = (void *) malloc(size * count);
	if (!alocacao)
		return (0);
	ft_bzero(alocacao, (size * count));
	return (alocacao);
}
