/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 01:51:35 by mobouzar          #+#    #+#             */
/*   Updated: 2019/05/12 19:17:37 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
#define FILLIT_H

# include "get_next_line/get_next_line.h"
# include "get_next_line/libft/libft.h"
# include <fcntl.h>
# include <string.h>

typedef struct  s_points
{
        int     x;
        int     y;
}               t_points;

typedef struct  s_tetriminos
{
        char    tetrimino[4][5];
}               t_tetriminos;


#endif