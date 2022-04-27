/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:44:07 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 23:32:58 by nayeokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	*init_answer(void)
{
	int	*answer;
	int	i;

	answer = (int *)malloc(sizeof(int) * N * N);
	if (!answer)
		return (0);
	i = -1;
	while (++i < N * N)
		answer[i] = 0;
	return (answer);
}

int	row_count(int i)
{
	int	row_count;

	if (i > 2 * N - 1)
		row_count = N;
	else
		row_count = 1;
	return (row_count);
}

int	*init_setting(int *quiz)
{
	int	*answer;
	int	**ref;
	int	i;
	int	row;
	int	count;

	answer = init_answer();
	ref = reference();
	i = -1;
	while (++i < 4 * N)
	{	
		row = row_count(i);
		if (quiz[i] == N)
		{
			count = -1;
			while (++count < N)
				answer[(ref[i / N][count]) + (i % N) * row] = count + 1;
		}
		else if (quiz[i] == 1)
			answer[ref[i / N][0] + (i % N) * row] = N;
	}
	free_ref(ref);
	return (answer);
}
