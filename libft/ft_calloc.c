/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:08:15 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:08:19 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	if (count != 0 && (tot_size / count) != size)
		return (0);
	dst = malloc(size * count);
	if (!dst)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}
