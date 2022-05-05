/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 07:15:15 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 07:20:53 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list(*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list *tmp;

	tmp = lst;
	if (lst == 0)
		return (0);
	while (lst->next)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
