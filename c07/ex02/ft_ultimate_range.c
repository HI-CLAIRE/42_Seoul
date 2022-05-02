/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:54:11 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/02 21:54:48 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	else if (min >= max)
	{
		arr[i] = 0;
		return (0);
	}
	while (i < len)
	{
		arr[i] = i + min;
		i++;
	}
	*range = arr;
	return (len);
}
