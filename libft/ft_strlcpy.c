/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:49:40 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 15:49:42 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = (int) dstsize;
	if (size != 0)
	{
		while (src[i] != 0 && size > (i + 1))
		{
			dst[i] = src[i];
			i ++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
