/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 00:08:23 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/15 00:01:17 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_test(char c, va_list str)
{
	int	length;

	length = 0;
	if (c == 'c')
	{
		len = ft_char(va_arg(str, int))
	}
	else if (c == 's')
	{
		len = ft_str(va_arg(str, char *))
	}
	else if (c == 'p')
	{
		len = ft_str(va_arg(str, char *))
	}
	else if (c == 'd')
	{
		len = ft_str(va_arg(str, char *))
	}
	else if (c == 'i')
	{
		len = ft_str(va_arg(str, char *));
	}
	else if (c == 'u')
	{
		len = ft_str(va_arg(str, char *));
	}
	else if (c == 'x')
	{
		len = ft_str(va_arg(str, char *));
	}
	else if (c == 'X')
	{
		len = ft_str(va_arg(str, char *));
	}
	else if (c == '%')
	{
		ft_str(va_arg(str, char *));
	}
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
			// char *str = va_arg(args,char *);
			length += ft_test(format[i + 1], args);
		}
		else
		{
			write(1, &format[i], 1);
			length++;
		}
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
int	main(void)
{
	// ft_printf("hello %s %x %X %i %d % %%", "world");
	printf("%s hello ", "world %s", "loay");
	return (0);
}