/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 22:20:34 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/29 19:27:47 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s_ans;
	int			i;

	s_ans = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_ans)
		return (0);
	i = 0;
	while (i < ac)
	{
		s_ans[i].size = ft_strlen(av[i]);
		s_ans[i].str = av[i];
		s_ans[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_ans[i].str = 0;
	return (s_ans);
}
