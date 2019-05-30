/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pc.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <mobouzar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:10:52 by anel-bou          #+#    #+#             */
/*   Updated: 2019/05/27 21:25:08 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	pc(char s[11][11], int len)
{
	int i = 0;
	int j = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if(s[i][j] == 'A')
				printf("\033[1;31m");
			if(s[i][j] == 'B')
				printf("\033[1;32m");
			if(s[i][j] == 'C')
				printf("\033[1;33m");
			if(s[i][j] == 'D')
				printf("\033[1;34m");
			if(s[i][j] == 'E')
				printf("\033[1;35m");
			if(s[i][j] == 'F')
				printf("\033[1;36m");
			if(s[i][j] == 'G')
				printf("\033[0;31m");
			if(s[i][j] == 'H')
				printf("\033[0;32m");
			if(s[i][j] == 'I')
				printf("\033[0;33m");
			if(s[i][j] == 'J')
				printf("\033[0;34m");
			if(s[i][j] == 'K')
				printf("\033[0;35m");
			if(s[i][j] == 'L')
				printf("\033[0;36m");
			printf("%c", s[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}



