/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:14:09 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:14:17 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	j;

	a = 0;
	if ((n == 0 && !*s2) || !*s2)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	while (s1[a] != '\0' && a < n)
	{
		j = 0;
		while (s1[a + j] != '\0' && s2[j] != '\0'
			&& s1[a + j] == s2[j] && (a + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&(s1[a]));
			j++;
		}
		a++;
	}
	return (NULL);
}
