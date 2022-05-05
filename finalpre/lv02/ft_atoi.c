/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 04:57:39 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/06 05:21:25 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int ans = 0;
	int sign = 1;

	while (*str < 33)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
		break;
	}
	while ('0' <= *str && *str <= '9')
	{
		ans = (10 * ans) + (*str - '0');
		str++;
	}
	return (sign * ans);
}

#include <stdio.h>
int main()
{
	char str1[100] = "      +223";
	char str2[100] = "   -+23";
	char str3[100] = "   -23d";

	printf("%d\n", ft_atoi(str1));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));



}
