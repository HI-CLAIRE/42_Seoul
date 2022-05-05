/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_2make_AJTCS.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 07:43:04 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/05 07:43:07 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ajtcsheader.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	make_input_file(void)
{
	int		fd;
	char	buf;

	fd = open("AJTCS", O_RDWR | O_CREAT | O_TRUNC, 0777);
	if (fd == -1)
		return (0);
	while (read(0, &buf, 1) != 0)
		write(fd, &buf, 1);
	close(fd);
	return (1);
}
