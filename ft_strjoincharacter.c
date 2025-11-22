/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoincharacter.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:05:41 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:05:42 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

unsigned char	*ft_strjoincharacter(unsigned char *str, unsigned char c)
{
	int				i;
	int				len;
	unsigned char	*swap;

	len = 0;
	i = 0;
	if (str)
		len = ft_strlen((char *)str);
	swap = malloc(sizeof(char) * (len + 2));
	if (str)
	{
		while (str[i] != '\0')
		{
			swap[i] = str[i];
			i++;
		}
	}
	swap[i] = c;
	swap[i + 1] = '\0';
	if (str)
		free(str);
	return (swap);
}
