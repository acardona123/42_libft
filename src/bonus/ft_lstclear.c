/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:53:35 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 02:11:42 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*pelem;
	t_list	*pnext;

	if (lst)
	{
		pelem = *lst;
		while (pelem)
		{
			(*del)(pelem->content);
			pnext = pelem->next;
			free(pelem);
			pelem = pnext;
		}
		*lst = NULL;
	}
}
