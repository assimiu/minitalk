/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:07:15 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 17:07:35 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		tam;
	char	*said;

	said = (char *) s;
	tam = ft_strlen(said);
	while (tam >= 0)
	{
		if (said[tam] == c)
			return (&said[tam]);
		tam --;
	}
	return (0);
}
