/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:43:52 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 18:53:34 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_format(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i % 2 == 0) && (str[i] < '1' || str[i] > N + '0'))
			return (0);
		else if ((i % 2 == 1) && str[i] != ' ')
			return (0);
		if (i > 8 * N - 2)
			return (0);
		i++;
	}
	return (1);
}

void	str_to_arr(char *str, int *quiz)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			quiz[j] = str[i] - '0';
			j++;
		}
		i++;
	}
}

int	is_number_cross(int *quiz)
{
	int	i;
	int	sum;

	i = 0;
	while (i < 3 * N)
	{
		if (i == N - 1)
			i += N + 1;
		sum = quiz[i] + quiz[i + N];
		if (sum < 3 || sum > N + 1)
			return (0);
		i++;
	}
	return (1);
}

int	is_number_only(int *quiz)
{
	int	i;
	int	count_1;
	int	count_n;

	i = 0;
	count_1 = 0;
	count_n = 0;
	while (i < 4 * N)
	{
		if (quiz[i] == 1)
			count_1++;
		else if (quiz[i] == N)
			count_n++;
		if (count_1 > 1 || count_n > 1)
			return (0);
		if (i % N == N - 1)
		{
			count_1 = 0;
			count_n = 0;
		}
		i++;
	}
	return (1);
}

int	check_input(int argc, char *argv[], int *quiz)
{
	if ((argc == 2) && is_format(argv[1]))
	{
		str_to_arr(argv[1], quiz);
		if (is_number_cross(quiz) && is_number_only(quiz))
			return (1);
	}
	return (0);
}
