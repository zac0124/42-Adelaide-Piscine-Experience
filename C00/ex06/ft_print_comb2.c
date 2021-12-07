/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:26:31 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/12/02 10:26:43 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_print_comb2(void)
{
	char a='0';
	char b='0';
	char c='0';
	char d='0';

	while ( a <=9)
	{ while ( b<=9)
		{ while ( c<=9)
			{while (d <=9)
				{ 
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1, &c, 1);
					write(1, &d, 1);
				}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
}
/*
int main(void)

{ ft_print_comb2();
}
*/
