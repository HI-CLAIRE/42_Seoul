/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:22:24 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 23:07:20 by hyojchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print(int *answer)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < N * N)
	{
		temp = answer[i] + '0';
		write(1, &temp, 1);
		if (i % N == N - 1)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
	}
}

int	main(int argc, char *argv[])
{
	int	*quiz;
	int	*answer;

	quiz = (int *)malloc(sizeof(int) * 4 * N);
	if (!quiz)
		return (0);
	if (check_input(argc, argv, quiz))
	{
		answer = init_setting(quiz);
		if (fill_number(quiz, answer) == 1)
		{
			print(answer);
			free(quiz);
			free(answer);
			return (1);
		}
		free(answer);
	}
	write(2, "Error\n", 6);
	free(quiz);
	return (0);
}
