/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <jquinodo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:41:53 by jquinodo          #+#    #+#             */
/*   Updated: 2024/11/21 18:28:26 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	if (!lst)
		return (0);
	count = 1;
	current = lst;
	while (current->next)
	{
		count++;
		current = current->next;
	}
	return (count);
}
