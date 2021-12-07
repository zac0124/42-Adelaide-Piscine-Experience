/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:08:35 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/07 11:37:05 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			return (1);
			i++;
		}
		return (0);
	}
	return (1);
}

int	main(void)
{
	char	a[] = "9345870923578";
	char	b[] = "ldsakjfaslfj";
	char	c[] = "UIFHDIUHFS";
	char	d[] = "";
	int	upper;

	upper = ft_str_is_uppercase(a);
	printf("%d\n", upper);
	upper = ft_str_is_uppercase(b);
	printf("%d\n", upper);
	upper = ft_str_is_uppercase(c);
	printf("%d\n", upper);
	upper = ft_str_is_uppercase(d);
	printf("%d\n", upper);
}
