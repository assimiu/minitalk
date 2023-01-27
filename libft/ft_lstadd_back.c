/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 18:13:57 by amane             #+#    #+#             */
/*   Updated: 2022/03/04 18:19:43 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*t;

	if (lst)
	{
		if (*lst)
		{
			t = ft_lstlast(*lst);
			t->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
