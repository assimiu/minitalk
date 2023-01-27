/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 15:38:27 by amane             #+#    #+#             */
/*   Updated: 2022/03/02 15:39:01 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcounter(const char *str, char c)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != c && str[i])
			i++;
		while (str[i] == c && str[i])
			i++;
		counter++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		start;

	new = malloc(sizeof(char *) * (strcounter(s, c) + 1));
	if (!s || !new)
		return (0);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		new[j] = ft_substr(s, start, i - start);
		j++;
	}
	new[j] = 0;
	return (new);
}
