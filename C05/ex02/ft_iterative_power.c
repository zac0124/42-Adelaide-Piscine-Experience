/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:02:59 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/15 15:14:31 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		n *= nb;
		power--;
	}
	return (n);
}
/*
#include<stdio.h>

int	main(void)
{

	printf("%d\n", ft_iterative_power(5,-2));
	printf("%d\n", ft_iterative_power(5,0));
	printf("%d\n", ft_iterative_power(5,5));
}
*/
