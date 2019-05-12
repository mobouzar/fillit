/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 01:51:07 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/12 22:52:41 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_square_valid(char **tetrimino)
{
	int		i;
	int		j;
	int		hashtag;
	int		point;

	i = -1;
	hashtag = 0;
	point = 0;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (tetrimino[i][j] == '#')
				hashtag++;
			else if (tetrimino[i][j] == '.')
				point++;
		}
	}
	return ((hashtag == 4 && point == 12) ? 1 : 0);
}

int		is_tetrimino_valid(char **tetrimino)
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = -1;
	if (is_square_valid(tetrimino))
	{
		while (++i < 4)
		{
			j = -1;
			while (++j < 4)
			{
				if (tetrimino[i][j] == '#')
				{
					(tetrimino[i++][j] == '#') ? count++ : count;
					(tetrimino[i--][j] == '#') ? count++ : count;
					(tetrimino[i][j++] == '#') ? count++ : count;
					(tetrimino[i][j--] == '#') ? count++ : count;
				}
			}
		}
	}
	return ((count == 6 || count == 8) ? 1 : 0);
}
