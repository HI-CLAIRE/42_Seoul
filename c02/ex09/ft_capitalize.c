/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_capitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:43:09 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/18 16:49:29 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str)
{
	if ((*(str - 1) >= '0' && *(str - 1) <= '9') || \
		(*(str - 1) >= 'a' && *(str - 1) <= 'z') || \
		(*(str - 1) >= 'A' && *(str - 1) <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ans;

	ans = str;
	if ('a' <= *str && *str <= 'z')
		*str -= 32;
	str++;
	while (*str)
	{
		if (check(str))
		{
			if ('A' <= *str && *str <= 'Z')
				*str += 32;
		}
		else
			if ('a' <= *str && *str <= 'z')
				*str -= 32;
		str++;
	}
	return (ans);
}
