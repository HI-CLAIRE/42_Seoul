/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:31:02 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/05 16:35:05 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap1(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (tab[count])
		count++;
	while (i < count)
	{
		j = i;
		while (j > 0)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
				ft_swap1(&tab[j - 1], &tab[j]);
			j--;
		}
		i++;
	}
}
