/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 21:38:40 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/26 01:06:54 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		solve(t_tetriminos *t, int nbt)
{
	t_points	p;

	if (nbt == t->nbt)
		return (1);
	p.x = -1;
	while (++p.x < t->len)
	{
		p.y = -1;
		while (++p.y < t->len)
		{
			if (set_tetrimino(&(*t), nbt, p))
			{
				system("clear");
				display(*t);
				usleep(1);
				if (solve(t, nbt + 1))
					return (1);
				else
					delete_tetrimino(&(*t), nbt, p);
			}
		}
	}
	return (0);
}

void	map(t_tetriminos *t)
{
	int i;
	int	j;

	i = -1;
	while (++i < t->len)
	{
		j = -1;
		while (++j < t->len)
			t->map[i][j] = '.';
	}
}

void	display(t_tetriminos t)
{
	int i;
	int j;

	i = -1;
	while (++i < t.len)
	{
		j = -1;
		while (++j < t.len)
			ft_putchar(t.map[i][j]);
		ft_putchar('\n');
	}
}

int		main(int argc, char const *argv[])
{
	t_tetriminos	t;
	int				fd;

	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
	{
		if (get_tetriminos(fd, &t))
		{
			t.len = 2;
			map(&t);
			while (solve(&t, 0) == 0)
			{
				t.len++;
				map(&t);
			}
		}
		else
			ft_putendl("error");
		//  display(t);
	}
	else
		ft_putendl("error");
	return (0);
}
