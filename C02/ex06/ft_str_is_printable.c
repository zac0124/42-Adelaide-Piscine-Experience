/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:20:34 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 15:56:28 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char	a[] = "º¡£∞§§¶•¶∞¢§§£∞§™º–≠";
	char	b[] = "aiuhfi56456lhdaiFIUHE";
	char	c[] = "~!@#$%^&*ª£¶¢";
	char	d[] = "";
	int	printable;

	printable = ft_str_is_printable(a);
	printf("%d\n", printable);
	printable = ft_str_is_printable(b);
	printf("%d\n", printable);
	printable = ft_str_is_printable(c);
	printf("%d\n", printable);
	printable = ft_str_is_printable(d);
	printf("%d\n", printable);
}
