/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayeokim <nayeokim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 22:04:27 by nayeokim          #+#    #+#             */
/*   Updated: 2022/04/24 23:36:11 by nayeokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>

# define N 4

int		check_input(int argc, char *argv[], int *quiz);
int		*init_setting(int *quiz);
int		**init_reference(void);
int		**reference(void);
void	free_ref(int **ref);
int		row_count(int i);
int		fill_number(int *quiz, int *answer);
int		check_skyscraper_count(int *building);
int		check_skyscraper(int *answer, int *quiz);
int		check_duplicate(int *answer, int x, int y, int input);
void	print(int *answer);

#endif
