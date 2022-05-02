/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:48:51 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/02 21:55:32 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

void	str_join(int size, char **strs, char *sep, char *ans)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*ans = strs[i][j];
			j++;
			ans++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			*ans = sep[j];
			j++;
			ans++;
		}
		i++;
	}
	*ans = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		total_len;

	total_len = ft_total_len(size, strs, sep);
	ans = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!ans)
		return (0);
	str_join(size, strs, sep, ans);
	return (ans);
}
