/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drag.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mydevice <mydevice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 18:30:45 by mobouzar          #+#    #+#             */
/*   Updated: 2019/10/04 12:04:13 by mydevice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

t_points		get_point(t_tetrimino t)
{
	int			i;
	int			j;
	t_points	p;

	i = -1;
	p.x = -1;
	p.y = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (t.tetrimino[i][j] == '#' && p.x == -1)
				p.x = i;
			if (t.tetrimino[j][i] == '#' && p.y == -1)
				p.y = i;
		}
	}
	return (p);
}

void			drag_tetrimino(t_tetrimino *t)
{
	int			i;
	int			j;
	int			k;
	t_points	p;

	i = -1;
	k = -1;
	p = get_point(*t);
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			if (t->tetrimino[i][j] == '#' && (p.x || p.y))
			{
				t->tetrimino[i - p.x][j - p.y] = '#';
				t->tetrimino[i][j] = '.';
				t->hashtag[++k].x = i - p.x;
				t->hashtag[k].y = j - p.y;
			}
			else if (t->tetrimino[i][j] == '#' && (p.x == 0 || p.y == 0))
			{
				t->hashtag[++k].x = i - p.x;
				t->hashtag[k].y = j - p.y;
			}
	}
}
