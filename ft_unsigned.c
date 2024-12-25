/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 23:38:18 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/25 23:40:55 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int x, unsigned int base)
{
	int				len;
	unsigned int	remain;

	len = 0;
	if (n > base - 1)
	{
		len = ft_unsigned((n / base), x, base);
	}
	remain = n % base;
	if (x == 1)
	{
		len += write(1, &"0123456789ABCDEF"[remain], 1);
	}
	else if (x == 0)
	{
		len += write(1, &"0123456789abcdef"[remain], 1);
	}
	return (len);
}
