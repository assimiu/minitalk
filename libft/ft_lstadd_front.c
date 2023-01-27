/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amane <amane@studente.42lisboa.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:54:59 by amane             #+#    #+#             */
/*   Updated: 2022/03/04 18:06:05 by amane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*t;

	if (lst)
	{
		if (*lst)
		{
			t = new;
			t->next = *lst;
			*lst = t;
		}
		else
		{
			*lst = new;
		}
	}
}
