/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:53:34 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 15:54:53 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || str[i] > 57))
			return (0);
			i++;
	}
	return (1);
}

int	main(void)
{
	char	*string = "";
	char	a[] = "294asdf7692764";
	char	b[] = "23452523";
	char	c[] = "@(*2453425&$*(&";
	char	d[] = "";
	int	number;

	number = ft_str_is_numeric(a);
	printf("%d\n", number);
	number = ft_str_is_numeric(b);
	printf("%d\n", number);
	number = ft_str_is_numeric(c);
	printf("%d\n", number);
	number = ft_str_is_numeric(d);
	printf("%d\n", number);
}
