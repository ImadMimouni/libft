/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:57:31 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/16 11:42:51 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ff(char *str)
{
	char	*strs;

	strs = (char *)str;
	strs = (char *) malloc(sizeof(char));
	strs[0] = '\0';
	return (strs);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		if (start >= ft_strlen(s))
		{
			str = (char *) malloc(sizeof(char));
			return (ff(str));
		}
		if (len > ft_strlen(s))
			len = ft_strlen(s);
		if (ft_strlen(s) <= start + len)
			len = ft_strlen(s) - start;
		str = (char *) malloc(sizeof(char) * (len + 1));
		if (str)
		{
			i = 0;
			while (i < len)
				str[i++] = s[start++];
			str[i] = '\0';
		}
		return (str);
	}
	return (NULL);
}
