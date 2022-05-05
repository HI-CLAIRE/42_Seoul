/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 05:47:26 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 05:55:50 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
		{
			*str = 155 - *str;
			write(1, str, 1);
		}
		else if ('a' <= *str && *str <= 'z')
		{
			*str = 219 - *str;
			write(1, str, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
