/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:44:00 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 18:53:39 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_empty(int *answer)
{
	int	empty;
	int	i;

	empty = 0;
	i = -1;
	while (++i < N * N)
	{
		if (answer[i] == 0)
			empty++;
	}
	return (empty);
}

int	*check_empty(int *answer)
{
	int	empty;
	int	*emptylist;
	int	i;
	int	j;

	empty = count_empty(answer);
	emptylist = (int *)malloc(sizeof(int) * (empty + 1));
	if (!emptylist)
		return (0);
	emptylist[0] = empty;
	i = -1;
	j = 1;
	while (++i < N * N)
	{
		if (answer[i] == 0)
		{
			emptylist[j] = i;
			j++;
		}
	}
	return (emptylist);
}

int	backtracking(int *quiz, int *answer, int *emptylist, int index)
{
	int	num;
	int	empty_i;

	if (index > emptylist[0])
	{
		if (check_skyscraper(answer, quiz))
			return (1);
		else
			return (0);
	}
	empty_i = emptylist[index];
	num = 0;
	while (++num < N + 1)
	{
		if (!check_duplicate(answer, empty_i % N, empty_i / N, num))
			continue ;
		answer[empty_i] = num;
		if (backtracking(quiz, answer, emptylist, index + 1))
			return (1);
	}
	answer[empty_i] = 0;
	return (0);
}

int	fill_number(int *quiz, int *answer)
{
	int	*emptylist;

	emptylist = check_empty(answer);
	if (backtracking(quiz, answer, emptylist, 1))
	{
		free(emptylist);
		return (1);
	}
	free(emptylist);
	return (0);
}
