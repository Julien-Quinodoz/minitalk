/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:40:18 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:43:52 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_intlen(long n)
{
	int	count;

	count = 0;
	if (n == 2147483648)
		return (10);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}