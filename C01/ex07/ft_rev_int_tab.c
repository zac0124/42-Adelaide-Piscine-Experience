/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:28:00 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/08 09:13:41 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		reverse;

	i = 0;
	while (i < (size / 2))
	{
		reverse = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = reverse;
		i++;
	}
}
/*
int main(void)
{
	int test_array[] = {8, 9, 20, 7, 6};
	printf("Original: ");
	for (int i = 0; i < 5; i++)
		printf("%d, ", test_array[i]);
	printf("\n");
	
	ft_rev_int_tab(test_array, 5); 
	
	printf("Modified: ");
	for (int i = 0; i < 5; i++)
		printf("%d, ", test_array[i]);
	printf("\n");


	int test_array_2[] = {10, 20, 30, 40, 50, 60, 70};
	printf("Original: ");
	for (int i = 0; i < 7; i++)
		printf("%d, ", test_array_2[i]);
	printf("\n");
	
	ft_rev_int_tab(test_array_2, 7); 
	
	printf("Modified: ");
	for (int i = 0; i < 7; i++)
		printf("%d, ", test_array_2[i]);
	printf("\n");
}
*/
