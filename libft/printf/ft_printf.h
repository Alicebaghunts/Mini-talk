/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alisharu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:55:18 by jede-ara          #+#    #+#             */
/*   Updated: 2025/11/22 21:07:01 by alisharu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_print_hex(unsigned int n, int c);
int	ft_print_pointer(unsigned long long ptr);
int	ft_print_unsig(unsigned int n, int fd);
int	ft_putnbr(int n);
int	ft_printf(const char *format, ...);

#endif
