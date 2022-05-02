/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 01:24:45 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/30 12:29:56 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	is_ok(int board[10], int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		if (board[idx] == board[i])
			return (0);
		else if ((ft_abs(board[idx] - board[i]) == ft_abs(idx - i)))
			return (0);
		i++;
	}
	return (1);
}

void	rqueens(int board[10], int *ans, int idx)
{
	int	j;

	j = 0;
	if (idx == 10)
	{
		while (j < 10)
		{
			ft_putchar(board[j] + '0');
			j++;
		}
		ft_putchar('\n');
		*ans += 1;
		return ;
	}
	while (j < 10)
	{
		board[idx] = j;
		if (is_ok(board, idx))
			rqueens(board, ans, idx + 1);
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[11];
	int	ans;

	ans = 0;
	rqueens(board, &ans, 0);
	return (ans);
}
