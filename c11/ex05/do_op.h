/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:19:36 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/05/04 17:41:39 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putchar(char c);
char	ft_putstr(char *str);
int		ft_calculate(int x, int y, char op);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_plus(int x, int y);
int		ft_minus(int x, int y);
int		ft_multiple(int x, int y);
int		ft_division(int x, int y);
int		ft_modulo(int x, int y);
#endif
