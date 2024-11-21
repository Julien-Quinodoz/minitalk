/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:54:39 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:56:10 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// char	f(unsigned int i, char c)
// {
// 	return (i + '0');
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
		i++;
	result = malloc((i + 1) * sizeof(char));
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

// int	main(void)
// {
// 	char string[] = "bonjour";
// 	printf("%s got turned into %s\n", string, ft_strmapi(string, f));
// 	return (0);
// }
