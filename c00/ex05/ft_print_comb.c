/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:40:55 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/16 07:56:00 by gyuyekim         ###   ########.fr       */
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

void	recursive_comb(int a, int curr, int max, int digit[])
{
	while (a < 10)
	{
		digit[curr] = a + '0';
		if (curr < max - 1)
			recursive_comb(a + 1, curr + 1, max, digit);
		if (curr == max - 1)
			ft_write(digit, max);
		a++;
	}
}

void	ft_print_comb(void)
{
	int	digit[11];

	recursive_comb(0, 0, 3, digit);
}
