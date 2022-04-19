/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruch00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 09:42:00 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/16 21:31:19 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	ft_putchar('o');
	if (x != 1)
	{
		while (x - 2 > 0)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle_line(int x)
{
	if (x != 1)
	{
		ft_putchar('|');
		while (x - 2 > 0)
		{
			ft_putchar(' ');
			x--;
		}
	}
	ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_num;

	line_num = 0;
	if (x > 0 && x <= 2147483647 && y > 0 && y <= 2147483647)
	{
		while (line_num < y)
		{
			if (line_num == 0)
			{
				first_line(x);
			}
			else if (line_num == y - 1)
			{
				first_line(x);
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
