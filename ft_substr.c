/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:57:31 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/16 16:12:55 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		if (start >= ft_strlen(s))
			return (ft_strdup(""));
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

// int main ()
// {
// 	char c[] = "khaild";
// 	printf("%s",(ft_substr(c,3,10)));
// 	system("leaks a.out");
// }