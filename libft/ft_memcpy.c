/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:43:43 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:44:34 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (!dest && !src)
		return (0);
	count = 0;
	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	while (count < n)
	{
		dest_copy[count] = (unsigned char)src_copy[count];
		count++;
	}
	return (dest);
}
