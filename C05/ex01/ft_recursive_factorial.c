/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:01:47 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/15 10:13:43 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
	
int	main()
{
	int a = 5;
	int b = 0;
	int c = -5;

	printf("%d\n", ft_recursive_factorial(a));
	printf("%d\n", ft_recursive_factorial(b));
	printf("%d\n", ft_recursive_factorial(c));
}
*/
