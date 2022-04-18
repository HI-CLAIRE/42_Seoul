/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:20:35 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/16 07:59:29 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int digit[], int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		write(1, &digit[i], 1);
		i++;
	}
	if (!(digit[0] == (10 + '0') - max))
		write(1, ", ", 2);
}

void	recursive_combn(int a, int curr, int max, int digit[])
{
	while (a < 10)
	{
		digit[curr] = a + '0';
		if (curr < max - 1)
			recursive_combn(a + 1, curr + 1, max, digit);
		if (curr == max - 1)
			ft_write(digit, max);
		a++;
	}
}

void	ft_print_combn(int n)
{
	int	digit[11];

	recursive_combn(0, 0, n, digit);
}
