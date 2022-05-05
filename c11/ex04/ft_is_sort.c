/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:42:28 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/04 08:55:24 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (i < length - 1 && flag == 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			flag = 0;
		i++;
	}
	if (flag == 0)
	{
		i = 0;
		flag = 1;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
