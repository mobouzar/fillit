/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solving.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mydevice <mydevice@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 21:38:40 by mobouzar          #+#    #+#             */
/*   Updated: 2019/10/04 13:25:15 by mydevice         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fillit.h"

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
			system("clear");
			display(*t);
			usleep(100);
			if (set_tetrimino(&(*t), nbt, p))
			{
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
			t.len = ft_sqrt(t.nbt * 4);
			map(&t);
			while (solve(&t, 0) == 0)
			{
				t.len++;
				map(&t);
			}
		}
		else
			ft_putendl("error");
	}
	else
		ft_putendl("usage: ./fillit target_file");
	return (0);
}
