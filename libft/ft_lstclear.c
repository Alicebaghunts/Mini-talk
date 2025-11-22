/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:10:16 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:10:20 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*j;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		j = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = j;
	}
	*lst = 0;
}
