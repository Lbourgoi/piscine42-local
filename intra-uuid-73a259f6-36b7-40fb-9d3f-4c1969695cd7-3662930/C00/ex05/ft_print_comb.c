/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourgoi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:27:15 by lbourgoi          #+#    #+#             */
/*   Updated: 2021/07/14 17:40:05 by lbourgoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_writen(char x, char y, char z);

void	ft_putchar(char c, char d, char u)
{
	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		while (d <= '8' )
		{
			while (u <= '9')
			{
				ft_writen (c, d, u);
			}	
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}

void	ft_writen(char x, char y, char z)

{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (! (x == '7' && y == '8' && z == '9'))
	{
		write (1, ", ", 2);
	}
}
