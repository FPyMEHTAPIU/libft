/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavelie <msavelie@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:37:14 by msavelie          #+#    #+#             */
/*   Updated: 2024/04/21 17:37:14 by msavelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}

/*#include <stdio.h>

int main()
{
    char s[] = "";
    char *str;
    str = ft_substr(s, 0, 4);
    printf("%s", str);
}*/
