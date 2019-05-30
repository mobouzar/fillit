/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 00:39:23 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/29 21:52:00 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	read_file(int fd, t_tetrimino *t)
{
	char	buff[22];
	char	*temp;
	int		rd;
	int		i;
	int		count;

	i = -1;
	count = 0;
	rd = read(fd, buff, 21);
	buff[rd] = '\0';
	while (buff[++i])
		if (buff[i] == '\n')
			count++;
	i = 0;
	while (i < 4 && ((rd == 20 && count == 4) || (rd == 21 && count == 5)))
	{
		temp = ft_strsub(buff, i * 5, 4);
		ft_strcpy(t->tetrimino[i], temp);
		ft_strdel(&temp);
		i++;
	}
	if (rd == 20 && count == 4)
		return (-1);
	return ((rd == 21 || rd == 20) ? 1 : 0);
}

static int	is_square_valid(char tetrimino[4][5])
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

static int	is_tetrimino_valid(char tetrimino[4][5])
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
					(i < 3 && tetrimino[i + 1][j] == '#') ? count++ : count;
					(i > 0 && tetrimino[i - 1][j] == '#') ? count++ : count;
					(tetrimino[i][j + 1] == '#') ? count++ : count;
					(j > 0 && tetrimino[i][j - 1] == '#') ? count++ : count;
				}
			}
		}
	}
	return ((count == 6 || count == 8) ? 1 : 0);
}

int			get_tetriminos(int fd, t_tetriminos *t)
{
	int check;
	int	error;

	t->nbt = 0;
	error = 0;
	while ((check = read_file(fd, &t->tetriminos[t->nbt])) && t->nbt < 26)
	{
		error += check;
		if (is_tetrimino_valid(t->tetriminos[t->nbt].tetrimino))
		{
			drag_tetrimino(&t->tetriminos[t->nbt]);
			t->nbt++;
		}
		else
			return (0);
		if (check == -1)
			return (1);
	}
	if (check == 0 || (check == -1 && error == 26))
		return (0);
	return (1);
}
