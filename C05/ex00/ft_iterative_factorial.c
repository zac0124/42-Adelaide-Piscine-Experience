/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:01:05 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/15 15:13:33 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb > 0)
		n *= nb--;
	return (n);
}
/*
#include<stdio.h>

int	main()
{
	int a = 4;
	int b = 5;

	printf("%d\n", ft_iterative_factorial(a));
	printf("%d\n", ft_iterative_factorial(b));
}
*/
