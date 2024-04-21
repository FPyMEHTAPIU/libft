/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelie <msavelie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:28:35 by msavelie          #+#    #+#             */
/*   Updated: 2024/04/21 18:28:35 by msavelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "libft.h"

static int	is_same_char(char const c1, char const c2)
{
	if (c1 == c2)
		return (1);
	return (0);
}

static size_t	ft_str_count(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	space;

	count = 0;
	i = 0;
	space = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			space = 1;
		if (s[i] != c && space)
		{
			count++;
			space = 0;
		}
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**string_list;
	size_t	i;
	size_t	j;
	size_t	str_count;

	i = 0;
	str_count = ft_str_count(s, c);
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = 0;
			i++;
			while (s[i + j] != c)
				j++;
			
		}
	}
	
}