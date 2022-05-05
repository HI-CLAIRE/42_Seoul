/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_if_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 07:21:08 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 07:51:11 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *b = *begin_list;

	if (begin_list == 0 || *begin_list == 0)
		return ;
	if (cmp(b->data, data_ref) == 0)
	{
		*begin_list = (*begin_list)->next;
		free(b);
		ft_is_remove_if(begin_list, data_ref, cmp);
	}
	ft_is_remove_if(&(*begin_list)->next, data_ref, cmp);
}
