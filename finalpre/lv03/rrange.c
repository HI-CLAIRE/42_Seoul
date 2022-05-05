/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 06:45:58 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 06:54:01 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int *ft_rrange(int start, int end)
{
	int *tab;
	int i = 0;
	int size = ft_abs(start - end - 1);

	tab = malloc(1000);
	if (size == 1)
		tab[0] = start;
	if (end > start)
	{
		while (i < size)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else
	{
		while (i < size)
		{
			tab[i] = end + i;
			i++;
		}
	}
	return (tab);
}
