/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:53:34 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/07 11:40:49 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
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
	char	a[] = "2947692764";
	char	b[] = "laejfldsjf";
	char	c[] = "@(*&$*(&";
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
