/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbourgoi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:37:21 by lbourgoi          #+#    #+#             */
/*   Updated: 2021/07/26 14:52:45 by lbourgoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while
		(src[index] != '\0')
	{
		dest[index] = src[index];
	index++;
}
dest[index] = '\0';
return (dest);
}
