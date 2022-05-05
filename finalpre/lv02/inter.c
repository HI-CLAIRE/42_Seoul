/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 05:41:19 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 05:45:57 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char *str, char c, int idx)
{
	int i = 0;
	while (i < idx)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
			{	
				if (check_double(s1, s1[i], i) == 1)
				{
					write(s1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}
