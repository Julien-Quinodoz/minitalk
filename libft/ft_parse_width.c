/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:47:28 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 17:49:04 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_parse_width(const char *format, int *i, t_flags *flags, va_list *args)
{
	int	count;

	count = 0;
	if (format[*i] == '*')
	{
		flags->width = va_arg(*args, int);
		if (flags->width < 0)
		{
			flags->minus = 1;
			flags->width = -flags->width;
		}
	}
	else if (ft_isdigit(format[*i]))
	{
		flags->width = ft_atoi(&format[*i]);
		*i += ft_intlen(flags->width) - 1;
	}
	count += ft_intlen(flags->width);
	return (count);
}
