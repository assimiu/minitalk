/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:29:03 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 15:30:09 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr_str;

	ptr_str = (char *) s;
	while (n-- > 0)
	{
		if (*ptr_str == c)
			return (ptr_str);
		ptr_str ++;
	}
	return (0);
}
