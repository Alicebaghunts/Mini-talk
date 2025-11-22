/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:17 by jede-ara          #+#    #+#             */
/*   Updated: 2025/11/22 21:10:01 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*j;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	j = ft_lstlast(*lst);
	j->next = new;
}
