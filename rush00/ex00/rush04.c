/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namkyoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:33:40 by namkyoun          #+#    #+#             */
/*   Updated: 2022/04/16 21:32:10 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	ft_putchar('A');
	if (x != 1)
	{
		while (x - 2 > 0)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	ft_putchar('C');
	if (x != 1)
	{
		while (x - 2 > 0)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	middle_line(int x)
{
	if (x != 1)
	{
		ft_putchar('B');
		while (x - 2 > 0)
		{
			ft_putchar(' ');
			x--;
		}
	}
	ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_num;

	line_num = 0;
	if (x > 0 && y > 0 && x <= 2147483647 && y <= 2147483647)
	{
		while (line_num < y)
		{
			if (line_num == 0)
			{
				first_line(x);
			}
			else if (line_num == y - 1)
			{
				last_line(x);
			}
			else
			{
				middle_line(x);
			}
			line_num++;
		}
	}
	else
		return ;
}
