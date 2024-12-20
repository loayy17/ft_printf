/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 01:36:01 by lalhindi          #+#    #+#             */
/*   Updated: 2024/12/19 01:39:42 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 11;
	ft_printf("Hello World %p %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX,
		(void *)&i);
	printf("Hello World %p %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX,
		(void *)&i);
	ft_printf("Hello World %p %p\n", (void *)ULONG_MAX, (void *)(-ULONG_MAX));
	printf("Hello World %p %p\n", (void *)ULONG_MAX, (void *)(-ULONG_MAX));
	ft_printf("Hello World %p %p\n", (void *)0, (void *)0);
	printf("Hello World %p %p\n", (void *)0, (void *)0);
	ft_printf(" %d \n", INT_MIN);
	printf(" %d \n", INT_MIN);
	return (0);
}
