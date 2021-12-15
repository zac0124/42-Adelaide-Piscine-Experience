+/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:02:23 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/13 17:06:52 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int	main(void)
{
	char 	a[] = "zorigt";
	char	b[] = "Zorigt";

	printf("%d\n",ft_strcmp(a,b));
   return (0);
}
*/
