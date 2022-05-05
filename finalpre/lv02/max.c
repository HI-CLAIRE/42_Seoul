/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 06:09:05 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 06:12:03 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, int len)
{
	int max;
	int i = 0;

	if (len)
	{
		max = tab[0];
		while (i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
		return (max);
	}
	else
		return (0);
}

#include <stdio.h>
int	 main(void)
{
	int	n1[5] =  {10, 4, 5, 66, 6};
	int n2[5] = {-20, -55, -5, -10, -4};
	int	n3[5];
	printf("%d\n", max(n1, 5));
	printf("%d\n", max(n2, 5));
	printf("%d\n", max(n3, 0));
}
