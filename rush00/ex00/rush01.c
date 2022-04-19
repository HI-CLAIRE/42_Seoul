/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junyoung <junyoung@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:10:33 by junyoung          #+#    #+#             */
/*   Updated: 2022/04/16 21:31:34 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	ft_putchar('/');
	if (x != 1)
	{
		while (x - 2 > 0)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	ft_putchar('\\');
	if (x != 1)
	{
		while (x - 2 > 0)
		{
			ft_putchar('*');
			x--;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	middle_line(int x)
{
	if (x != 1)
	{
		ft_putchar('*');
		while (x - 2 > 0)
		{
			ft_putchar(' ');
			x--;
		}
	}
	ft_putchar('*');
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
