/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:42:05 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 18:27:46 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = malloc(nelem * elsize);
	if (!pointer)
		return (0);
	i = 0;
	while (i < (nelem * elsize))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
