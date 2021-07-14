/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourgoi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 21:44:08 by lbourgoi          #+#    #+#             */
/*   Updated: 2021/07/14 18:02:54 by lbourgoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_revers_alphabet(void);

void	ft_print_revers_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		 write (1, &c, 1);
		 c--;
	}
}

