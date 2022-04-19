/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 10:37:40 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/19 20:31:28 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char str[]);
void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	if (argc == 3)
		return (rush(ft_atoi(argv[1]), ft_atoi(argv[2])));
	else
		return (0);
}

int	ft_atoi(char str[])
{
	int	sign;
	int	ans;
	int	i;

	sign = 1;
	ans = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans * sign);
}
