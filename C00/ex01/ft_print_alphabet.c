/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourgoi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:29:05 by lbourgoi          #+#    #+#             */
/*   Updated: 2021/07/11 20:33:31 by lbourgoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void    ft_print_alphabet(void);

void    ft_print_alphabet(void)
{
    char    c;

    c = 'a';
    while (c <= 'z')
    {
         write (1, &c, 1);
         c++;
    }
}

int    main(void)
{
    ft_print_alphabet();
    return (0);
}
