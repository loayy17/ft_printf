/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:38:18 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/19 01:39:25 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int x, int base)
{
	int	len;

	len = 0;
	if (n > (unsigned int)base - 1)
	{
		len = ft_unsigned((n / base), x, base);
	}
	if (x == 1)
	{
		write(1, "0123456789ABCDEF" + n % base, 1);
	}
	else if (x == 0)
	{
		write(1, "0123456789abcdef" + n % base, 1);
	}
	return (len + 1);
}
