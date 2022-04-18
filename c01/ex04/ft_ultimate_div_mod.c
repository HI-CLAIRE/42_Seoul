/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyuyekim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 18:46:56 by gyuyekim          #+#    #+#             */
/*   Updated: 2022/04/16 19:17:07 by gyuyekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ult_div;
	int	ult_mod;

	ult_div = *a / *b;
	ult_mod = *a % *b;
	*a = ult_div;
	*b = ult_mod;
}