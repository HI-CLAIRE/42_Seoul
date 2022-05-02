/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 18:11:32 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/02 21:57:18 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_it_base(char c, char *base);
int	ft_atoi(char *str, char *base);
int	is_ok(char *base);

int	to_base(int nbr, char *base_to)
{
	int		len;
	long	n;
	int		to_len;

	n = nbr;
	len = ft_strlen(base_to);
	to_len = 0;
	if (n < 0)
	{
		n = -n;
		to_len++;
	}
	while (n >= len)
	{
		n /= len;
		to_len++;
	}
	to_len++;
	return (to_len);
}

void	base_to_ans(int ten_num, int to_len, char *base_to, char *ans)
{
	int			n;
	long long	lnum;

	n = ft_strlen(base_to);
	lnum = ten_num;
	ans[to_len] = '\0';
	to_len--;
	if (lnum < 0)
	{
		ans[0] = '-';
		lnum = -lnum;
	}
	while (lnum >= n)
	{
		ans[to_len] = base_to[lnum % n];
		to_len--;
		lnum = lnum / n;
	}
	ans[to_len] = base_to[lnum % n];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		ten_num;
	int		to_len;
	char	*ans;

	if (is_ok(base_from) == 0 || is_ok(base_to) == 0)
		return (0);
	ten_num = ft_atoi(nbr, base_from);
	to_len = to_base(ten_num, base_to);
	ans = (char *)malloc(sizeof(char) * (to_len + 1));
	if (!ans)
		return (0);
	base_to_ans(ten_num, to_len, base_to, ans);
	return (ans);
}
