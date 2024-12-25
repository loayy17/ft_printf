/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:17:58 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/25 00:10:29 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_char(int c);
int	ft_str(char *str);
int	ft_pointer(void *p);
int	ft_ulong(unsigned long n);
int	ft_number_signed(int n);
int	ft_unsigned(unsigned int n, int x, unsigned int base);
int	ft_printf(const char *format, ...);
#endif