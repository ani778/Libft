/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhovhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:43:09 by anhovhan          #+#    #+#             */
/*   Updated: 2021/02/02 20:36:19 by anhovhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int len;

	len = 0;
	if (lst)
	{
		len = 1;
		while (lst->next)
		{
			lst = lst->next;
			len++;
		}
	}
	return (len);
}
