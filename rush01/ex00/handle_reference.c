/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_setting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:44:07 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 23:35:12 by nayeokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	**init_reference(void)
{
	int	**ref;
	int	count;

	ref = malloc(sizeof(int *) * 4);
	if (!ref)
		return (0);
	count = -1;
	while (++count < 4)
	{
		ref[count] = malloc(sizeof(int) * N);
		if (!ref[count])
			return (0);
	}
	return (ref);
}

int	**reference(void)
{
	int	**ref;
	int	count;
	int	index;

	ref = init_reference();
	count = -1;
	while (++count < 4)
	{
		index = -1;
		while (++index < N)
		{
			if (count % 4 == 0)
				ref[count][index] = index * N;
			else if (count % 4 == 2)
				ref[count][index] = index;
			else
				ref[count][index] = ref[count - 1][N - index - 1];
		}
	}
	return (ref);
}

void	free_ref(int **ref)
{
	int	i;

	i = -1;
	while (++i < 4)
		free(ref[i]);
	free(ref);
}
