/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourgoi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:44:23 by lbourgoi          #+#    #+#             */
/*   Updated: 2021/07/14 18:03:15 by lbourgoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void);

void	ft_print_number(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		 write (1, &c, 1);
		 c++;
	}
}
