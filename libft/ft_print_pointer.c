/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:48:17 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:49:04 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_pointer(unsigned long long p, t_flags *flags)
{
	int	count;

	count = 0;
	flags->hash = 0;
	count += ft_print_string("0x");
	count += ft_print_hexa(p, 'x', flags);
	return (count);
}
