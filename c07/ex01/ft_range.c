/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:53:16 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/02 21:54:42 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	range = (int *)malloc(sizeof(int) * len);
	if (min >= max)
		return (0);
	while (i < len)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
