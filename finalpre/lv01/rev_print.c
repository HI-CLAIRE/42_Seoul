/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:52:11 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 05:24:38 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int len = 0;
	while (str[len])
		len++;
	len--;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}

}

int main(int ac, char **av)
{
	rev_print(av[1]);
	return (0);
}
