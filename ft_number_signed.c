/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:37:56 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/19 00:40:49 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_number_signed(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		len += 1;
	}
	if (n > 9)
	{
		len += ft_number_signed(n / 10);
	}
	write(1, "0123456789" + n % 10, 1);
	return (len + 1);
}

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	// ft_number_signed(INT_MIN);
// 	printf("\n %d \n",ft_number_signed(INT_MIN));
// 	// ft_number_signed(INT_MAX);
// 	printf("\n %d \n",ft_number_signed(INT_MAX));
// 	printf("\n");
// 	// ft_number_signed(0);
// 	printf("\n %d \n",ft_number_signed(0));
// 	printf("\n");
// 	// ft_number_signed(-0);
// 	printf("\n %d %i \n" ,ft_number_signed(-0),-0);
// 	printf("\n");
// 	// ft_number_signed(1);
// 	printf("\n %d \n",ft_number_signed(1));
// 	printf("\n");
// 	return (0);
// }