/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:40:52 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:44:04 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <stdlib.h>

static int	get_digits(long int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

// static void	ft_rev_tab(char *tab, int size)
// {
// 	int		i;
// 	char	*array;

// 	i = 0;
// 	array = malloc((size + 1) * sizeof(char));
// 	if (!array)
// 		return ;
// 	while (i < size)
// 	{
// 		array[i] = *tab;
// 		if (i != size - 1)
// 			tab++;
// 		i++;
// 	}
// 	i--;
// 	tab -= (size - 1);
// 	while (i >= 0)
// 	{
// 		*tab++ = array[i];
// 		i--;
// 	}
// }

char	*ft_itoa(int n)
{
	int			digit_count;
	char		*result;
	long int	n_copy;

	n_copy = n;
	if (n_copy < 0)
		n_copy *= -1;
	digit_count = get_digits(n_copy);
	if (n < 0)
		digit_count++;
	result = malloc((digit_count + 1) * sizeof(char));
	if (!result)
		return (0);
	result[digit_count--] = '\0';
	while (digit_count >= 0)
	{
		result[digit_count--] = (n_copy % 10) + '0';
		n_copy /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }