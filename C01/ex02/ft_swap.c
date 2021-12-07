/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:09:23 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 09:02:07 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swapping;

	swapping = *a;
	*a = *b;
	*b = swapping;
}
/*
int main(void)
{
    int a;
    int b;

        a = 2021;
        b = 2022;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

        a = 2023;
        b = 2024;
        ft_swap(&a, &b);
        printf("%d,%d\n", a, b);

    	a = 1999;
    	ft_swap(&a, &a);
    	printf("%d\n", a);
    	return (0);
}

*/
