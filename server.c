/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:06:15 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:06:16 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

void	man_signal(int signal)
{
	static int				i = 0;
	static unsigned char	binary;
	static unsigned char	bit;

	if (signal == SIGUSR1)
	{
		binary = 1;
		bit = bit | (binary << i);
		i++;
	}
	else if (signal == SIGUSR2)
	{
		binary = 0;
		bit = bit | (binary << i);
		i++;
	}
	if (i == 8)
	{
		write(1, &bit, 1);
		bit = 0;
		i = 0;
	}
}

void	ft_sig(void)
{
	struct sigaction	a;

	a.sa_handler = &man_signal;
	a.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &a, NULL);
	sigaction(SIGUSR2, &a, NULL);
}

int	main(void)
{
	ft_printf("Your pid is: %d\n", getpid());
	ft_sig();
	while (1)
		pause();
	return (0);
}
