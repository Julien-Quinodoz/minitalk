/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:42:56 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:44:28 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_pointer;
	unsigned char	*s2_pointer;

	i = 0;
	s1_pointer = (unsigned char *)s1;
	s2_pointer = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_pointer[i] != s2_pointer[i])
			return (s1_pointer[i] - s2_pointer[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "\0euuh ?";
// 	s2 = "\0euuh \0?";
// 	printf("memcmp returned %d\n", memcmp(s1, s2, 10));
// 	printf("ft_memcmp returned %d\n", ft_memcmp(s1, s2, 10));
// 	return (0);
// }
