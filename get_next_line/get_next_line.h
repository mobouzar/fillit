/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:48:03 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/06 05:04:27 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# define BUFF_SIZE 32

typedef struct	s_gnl
{
	char		buff[BUFF_SIZE + 1];
	int			c;
	int			p;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
