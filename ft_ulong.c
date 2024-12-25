/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 01:17:38 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/25 23:37:53 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ulong(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len = ft_ulong(n / 16);
		len += ft_ulong(n % 16);
	}
	else
		len += write(1, &"0123456789abcdef"[n], 1);
	return (len);
}
