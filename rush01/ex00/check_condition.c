/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_condition.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 23:59:17 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 23:16:34 by nayeokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_skyscraper_count(int *building)
{
	int	i;
	int	max;
	int	count;

	i = -1;
	max = 0;
	count = 0;
	while (++i < N)
	{
		if (building[i] > max)
		{
			max = building[i];
			count++;
		}
	}
	return (count);
}

int	check_skyscraper(int *answer, int *quiz)
{
	int	**ref;
	int	*building;
	int	count;
	int	row;
	int	i;

	building = malloc(sizeof(int) * N);
	if (!building)
		return (0);
	ref = reference();
	i = -1;
	while (++i < 4 * N)
	{
		row = row_count(i);
		count = -1;
		while (++count < N)
			building[count] = answer[ref[i / N][count] + (i % N) * row];
		if (quiz[i] != check_skyscraper_count(building))
		{
			free(building);
			return (0);
		}
	}
	free(building);
	return (1);
}

int	check_duplicate(int *answer, int x, int y, int input)
{
	int	count;

	count = 0;
	while (count < N)
	{
		if (answer[N * y + count] == input)
			return (0);
		count++;
	}
	count = 0;
	while (count < N)
	{
		if (answer[N * count + x] == input)
			return (0);
		count++;
	}
	return (1);
}
