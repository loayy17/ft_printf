/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:08:23 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/19 01:35:30 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(char c, va_list str)
{
	int	length;

	length = 0;
	if (c == 'c')
		length = ft_char(va_arg(str, int));
	else if (c == 's')
		length = ft_str(va_arg(str, char *));
	else if (c == 'p')
		length = ft_pointer(va_arg(str, void *));
	else if (c == 'd' || c == 'i')
		length = ft_number_signed(va_arg(str, int));
	else if (c == 'u')
		length = ft_unsigned(va_arg(str, unsigned int), 0, 10);
	else if (c == 'x')
		length = ft_unsigned(va_arg(str, unsigned int), 0, 16);
	else if (c == 'X')
		length = ft_unsigned(va_arg(str, unsigned int), 1, 16);
	else if (c == '%')
		length = ft_char('%');
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		length;
	int		i;

	va_start(args, format);
	length = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			length += ft_specifier(format[i + 1], args);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
