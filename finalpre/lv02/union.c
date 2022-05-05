/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 05:33:58 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 05:41:15 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double2(char c, char *str)
{
	int i = 0;
	while (*str)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

int check_double(char c, char *str, int idx)
{
	int i = 0;
	while (i < idx)
	{
		if (c == str[i])
			return (0);
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i = 0;
	while (s1[i])
	{
		if (check_double(s1[i], s1, i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (check_double2(s2[i], s1) == 1)
		{
			if (check_double(s2[i], s2, i) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
	
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
