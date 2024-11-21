/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:47:19 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:49:04 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*pointer_copy;

	count = 0;
	pointer_copy = (unsigned char *)s;
	while (count < n)
	{
		pointer_copy[count++] = (unsigned char)c;
	}
	return (pointer_copy);
}
