/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:04:27 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/15 15:06:52 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((i * i) < nb && i < 46340)
	{	
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	int	b = 25;
	int c = 2147483647;
	int d = 2147395600;
	printf("square of %i is %i\n", b, ft_sqrt(b));
	printf("square of %i is %i\n", c, ft_sqrt(c));
	printf("square of %i is %i", d, ft_sqrt(d));
}
*/
