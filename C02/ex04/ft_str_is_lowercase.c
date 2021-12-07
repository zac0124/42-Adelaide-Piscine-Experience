/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:04:40 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/07 11:39:02 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			return (1);
			i++;
		}
		return (0);
	}
	return (1);
}

int main(void)
{
	char	a[] = "aiushfdaksdh";
	char	b[] = "489275098247";
	char	c[] = "^&%^#*&$%";
	char	d[] = "";
	int	alph;

	alph = ft_str_is_lowercase(a);
	printf("%d\n", alph);
	alph = ft_str_is_lowercase(b);
	printf("%d\n", alph);
	alph = ft_str_is_lowercase(c);
	printf("%d\n", alph);
	alph = ft_str_is_lowercase(d);
	printf("%d\n", alph);
}
