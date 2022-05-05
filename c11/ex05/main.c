/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 08:57:17 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/04 18:24:34 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

char	is_operator(char *str)
{
	int		i;
	char	*operator;

	operator = "+-*/%";
	if (!(str[0] != '\0' && str[1] == '\0'))
		return (0);
	i = 0;
	while (operator[i])
	{
		if (str[0] == operator[i])
			return (operator[i]);
		i++;
	}
	return (0);
}

void	stop_op(int y, char op)
{
	if (y == 0)
	{
		if (op == '/')
			ft_putstr("Stop : division by zero\n");
		else if (op == '%')
			ft_putstr("Stop : modulo by zero\n");
	}
}

void	do_op(int x, int y, char op)
{
	int		i;
	int		ans;
	char	*operator;
	int		(*calculator[5])(int, int);

	operator = "+-*/%";
	calculator[0] = &ft_plus;
	calculator[1] = &ft_minus;
	calculator[2] = &ft_multiple;
	calculator[3] = &ft_division;
	calculator[4] = &ft_modulo;
	i = 0;
	ans = 0;
	while (i < 5)
	{
		if (op == operator[i])
		{
			ans = (calculator[i])(x, y);
			break ;
		}
		i++;
	}
	ft_putnbr(ans);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		x;
	int		y;
	char	op;

	if (ac == 4)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[3]);
		op = is_operator(av[2]);
		if (op == 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		if (y == 0)
		{
			stop_op(y, op);
			return (0);
		}
		do_op(x, y, op);
	}
	return (0);
}
