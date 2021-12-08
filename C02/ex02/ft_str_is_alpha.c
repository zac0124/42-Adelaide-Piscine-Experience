/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:35:31 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 15:54:19 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || ((str[i] > 90) && (str[i] <97)) || (str[i] > 122))
		
			return (0);
			i++;
		}	
	
	return (1);
}

int	main(void)
{
	char	a[] = "a2984750945";
	char	b[] = "uaiodhsfiouaAAAshfiajnsdf";
	char	c[] = "@#$%f^&*(";
	char	d[] = "";
	int	alph;

	alph = ft_str_is_alpha(a);
	printf("%d\n", alph);
	alph = ft_str_is_alpha(b);
	printf("%d\n", alph);
	alph = ft_str_is_alpha(c);
	printf("%d\n", alph);
	alph = ft_str_is_alpha(d);
	printf("%d\n", alph);
}
