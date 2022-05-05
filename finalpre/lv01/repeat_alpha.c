/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:03:48 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 04:16:56 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_cnt(char c)
{
	int cnt = 0;

	if ('A' <= c && c <= 'Z')
		cnt = c - 'A' + 1;
	else if ('a' <= c && c <= 'z')
		cnt = c - 'a' + 1;
	else 
		cnt = 1;
	return (cnt);
}

int main(int ac, char **av)
{
	int cnt;
	if (ac == 2)
	{
		while (*av[1])
		{
			cnt = letter_cnt(*av[1]);
			while (cnt--)
			{
				write(1, av[1], 1);
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
