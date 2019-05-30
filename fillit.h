/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 01:51:35 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/29 19:16:12 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <fcntl.h>

typedef struct	s_points
{
	int			x;
	int			y;
}				t_points;

typedef struct	s_tetrimino
{
	char		tetrimino[4][5];
	t_points	hashtag[4];
}				t_tetrimino;

typedef struct	s_tetriminos
{
	t_tetrimino	tetriminos[26];
	int			nbt;
	char		map[11][11];
	int			len;
}				t_tetriminos;

int				get_tetriminos(int fd, t_tetriminos *t);
int				set_tetrimino(t_tetriminos *t, int tetpos, t_points p);
void			drag_tetrimino(t_tetrimino *t);
int				delete_tetrimino(t_tetriminos *t, int tetpos, t_points p);
int				solve(t_tetriminos *t, int i);
void			display(t_tetriminos t);

#endif
