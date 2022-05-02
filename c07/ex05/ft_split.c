/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 17:49:37 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/02 21:57:53 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_cnt(char *str, char *charset)
{
	int	word;

	word = 0;
	if (is_sep(*str, charset) == 0)
		word++;
	str++;
	while (*str)
	{
		if (is_sep(*(str - 1), charset) == 1 && is_sep(*str, charset) == 0)
			word++;
		str++;
	}
	return (word);
}

int	word_len(char *str, char *charset)
{
	int	len;

	len = 0;
	while (is_sep(str[len], charset) == 0 && str[len] != '\0')
		len++;
	return (len);
}

char	**placing_char(char **ans, char *str, char *charset, int word)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	while (i < word)
	{
		while (is_sep(*str, charset) == 1)
			str++;
		j = 0;
		len = word_len(str, charset);
		ans[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!ans[i])
			return (0);
		while (is_sep(*str, charset) == 0 && *str)
		{
			ans[i][j] = *str;
			str++;
			j++;
		}
		ans[i][j] = '\0';
		i++;
	}
	ans[i] = 0;
	return (ans);
}

char	**ft_split(char *str, char *charset)
{
	int		word;
	char	**ans;

	word = word_cnt(str, charset);
	ans = (char **)malloc(sizeof(char *) * (word + 1));
	if (!ans)
		return (0);
	ans = placing_char(ans, str, charset, word);
	return (ans);
}
