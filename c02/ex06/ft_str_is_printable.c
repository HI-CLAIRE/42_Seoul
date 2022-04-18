/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:06:14 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/18 10:29:05 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] >= 127)
			return (0);
		else
			i++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char str1[100] = "1 as f;;'23?!~4";
	char str2[100] = "\n";
	char str3[100] = "";
	char str4[100] = {1, 2, 0, 129};
	char str5[100] = "ABC";

	printf("1. '%s' : %d\n", str1, ft_str_is_printable(str1));
	printf("2. %s : %d\n", str2, ft_str_is_printable(str2));
	printf("3. '%s' : %d\n", str3, ft_str_is_printable(str3));
	printf("4. '%s' : %d\n", str4, ft_str_is_printable(str4));
	printf("5. '%s' : %d\n", str5, ft_str_is_printable(str5));

	return 0;
}
