/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:46:00 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 04:51:35 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		if (str[i] < 33 && str[i + 1] > 32)
			j = i + 1;
		i++;
	}
	while (str[j] && str[j] > 32)
	{
		write(1, &str[j], 1);
		j++;
	}
}


int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
