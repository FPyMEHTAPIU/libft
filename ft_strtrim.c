/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelie <msavelie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:01:26 by msavelie          #+#    #+#             */
/*   Updated: 2024/04/21 18:01:26 by msavelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "libft.h"

static int	check_char(char const symbol, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (symbol == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int		check[2];
	char	*str;

	i = 0;
	while (s1[i] != '\0')
	{
		if (i == 0)
			check[0] = check_char(s[i], set);
		i++;
	}
	if (i - 1 != 0 && i - 1 != '\0')
		check[1] = check_char(s[i - 1], set);
	if (!check[0] && !check[1])
	{
		str = malloc(i);
		// TODO: copy the whole string to the str
	}
	else
	{
		if (check[0] && !check[1])
		{
			str = malloc(i - 1);
			// TODO: copy the string to the str without 1st char (start from the second char)
		}
		else if (!check[0] && check[1])
		{
			str = malloc(i - 1);
			// TODO: copy the string to the str without the last char
		}
		else 
		{
			str = malloc(i - 2);
			// TODO: copy the string to the str without the first and the last chars
		}
	}
	if (!str)
		return (NULL);
	return (str);
}