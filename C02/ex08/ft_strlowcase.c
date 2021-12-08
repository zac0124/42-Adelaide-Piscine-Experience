/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:55:51 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 09:47:12 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] +32;
			i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	a[] = "ldkfjasf";
	char	b[] = "LKFJDLKSJFL";
	char	c[] = "as34jf#$#OFIEJ";

	ft_strlowcase(a);
	printf("%s\n", a);
	ft_strlowcase(b);
	printf("%s\n", b);
	ft_strlowcase(c);
	printf("%s\n", c);
}
*/
