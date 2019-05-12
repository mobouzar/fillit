/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 21:36:00 by mobouzar          #+#    #+#             */
/*   Updated: 2019/04/16 03:01:55 by mobouzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int		ft_count_words(char const *str, char del)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del && (str[i + 1] == '\0' || str[i + 1] == del))
			count++;
		i++;
	}
	return (count);
}

static char		**ft_allocate_str(char **array, char const *str, char del)
{
	int			i;
	int			count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del)
		{
			count++;
			if (str[i + 1] == '\0' || str[i + 1] == del)
			{
				*array = (char *)malloc(sizeof(char) * (count + 1));
				array++;
				count = 0;
			}
		}
		i++;
	}
	return (array);
}

static char		**ft_fill_array(char **array, char const *str, char del)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del)
		{
			array[k][j] = str[i];
			j++;
			if (str[i + 1] == '\0' || str[i + 1] == del)
			{
				array[k][j] = '\0';
				k++;
				j = 0;
			}
		}
		i++;
	}
	array[k] = 0;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**wordsarray;
	int			i;

	if (!s)
		return (NULL);
	i = ft_count_words(s, c);
	wordsarray = (char **)malloc(sizeof(char *) * (i + 1));
	if (wordsarray == NULL)
		return (NULL);
	ft_allocate_str(wordsarray, s, c);
	ft_fill_array(wordsarray, s, c);
	return (wordsarray);
}
