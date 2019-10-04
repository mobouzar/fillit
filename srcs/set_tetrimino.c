/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_tetrimino.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mydevice <mydevice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 02:04:44 by mobouzar          #+#    #+#             */
/*   Updated: 2019/10/04 12:04:11 by mydevice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

int		set_tetrimino(t_tetriminos *t, int tetpos, t_points p)
{
	int i;
	int x;
	int y;

	i = -1;
	while (++i < 4)
	{
		x = t->tetriminos[tetpos].hashtag[i].x;
		y = t->tetriminos[tetpos].hashtag[i].y;
		if (x + p.x >= t->len || y + p.y >= t->len)
			return (0);
		else if (t->map[x + p.x][y + p.y] != '.')
			return (0);
	}
	i = -1;
	while (++i < 4)
	{
		x = t->tetriminos[tetpos].hashtag[i].x;
		y = t->tetriminos[tetpos].hashtag[i].y;
		t->map[x + p.x][y + p.y] = 'A' + tetpos;
	}
	return (1);
}

int		delete_tetrimino(t_tetriminos *t, int tetpos, t_points p)
{
	int	i;
	int x;
	int y;

	i = -1;
	while (++i < 4)
	{
		x = t->tetriminos[tetpos].hashtag[i].x;
		y = t->tetriminos[tetpos].hashtag[i].y;
		t->map[x + p.x][y + p.y] = '.';
	}
	return (1);
}
