/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:28:24 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/07 17:03:05 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	first;
	int	past;
	int	temp;
	
	i = 0;
	while (i < size)
	{
		first = i;
		past = i + 1;
		while (past < size)
		{
			if (tab[past] < tab[first])
				first = past;
			past++;
		}
		if (first != i)
		{
			temp = tab[i];
			tab[i] = tab[first];
			tab[first] = temp;
		}
		i++;
	}
}

int main(void)
{
	int test[] = {14, 5, 2, 7, 10};
	printf("Original: ");
	for (int i = 0; i < 5; i++)
		printf("%d, ", test[i]);
	printf("\n");
	
	ft_sort_int_tab(test, 5); 
	
	printf("Modified ");
	for (int i = 0; i < 5; i++)
		printf("%d, ", test[i]);
	printf("\n");


	int test2[] = {7, 1, 3, 8, 2, 6};
	printf("Original: ");
	for (int i = 0; i < 6; i++)
		printf("%d, ", test2[i]);
	printf("\n");
	
	ft_sort_int_tab(test2, 6); 
	
	printf("Modified: ");
	for (int i = 0; i < 6; i++)
		printf("%d, ", test2[i]);
	printf("\n");
}
