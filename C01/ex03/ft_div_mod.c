/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:09:38 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 09:03:22 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
    int a;
    int b;
    int c;
    int d;

        a = 5;
        b = 3;
		c = 12;
		d = 5;
        ft_div_mod(a, b, &c, &d);
        printf("%d %d\n",c,d);

        return (0);
}
*/
