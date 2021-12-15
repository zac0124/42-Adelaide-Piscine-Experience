/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:03:35 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/15 10:08:06 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power (nb, (power - 1)));
}
/*
#include <stdio.h>

int	main(void)
{
printf("%d\n", ft_recursive_power(5,0));
printf("%d\n", ft_recursive_power(5,-1));
printf("%d\n", ft_recursive_power(5,3));
}
*/
