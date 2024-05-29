/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:24:52 by yadiaman          #+#    #+#             */
/*   Updated: 2024/04/24 12:01:52 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int main(void)
{
	char array[10];

    ft_memset(array, 'A', sizeof(array));

    for (int i = 0; i < sizeof(array); i++) 
	{
		printf("%c", array[i]);
	}
    printf("\n");

    return (0);
}*/
