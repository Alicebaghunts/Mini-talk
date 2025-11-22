/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:06:08 by alisharu          #+#    #+#             */
/*   Updated: 2025/11/22 21:06:11 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_minitalk.h"

unsigned char	*g_out = 0;

void	man_signal(int signal, siginfo_t *info, void *p)
{
	static int				i = 0;
	static unsigned char	binary;
	static unsigned char	bit;

	(void)p;
	binary = (signal == SIGUSR1);
	bit = bit | (binary << i);
	i++;
	if (i == 8)
	{
		g_out = ft_strjoincharacter(g_out, bit);
		if (bit == '\0')
		{
			ft_printf("%s", g_out);
			kill(info->si_pid, SIGUSR1);
			free (g_out);
			g_out = 0;
		}
		bit = 0;
		i = 0;
	}
}

void	ft_sig(void)
{
	struct sigaction	a;

	a.sa_sigaction = &man_signal;
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
