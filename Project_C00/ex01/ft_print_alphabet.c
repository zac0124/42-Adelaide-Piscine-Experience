/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:48:43 by zmunkhja          #+#    #+#             */
/*   Updated: 2021/11/29 14:48:51 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char letter;

    letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
}
