/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:57:31 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/29 21:46:39 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*substitution(void)
{
	char	*str;

	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		ind;
	size_t		total;

	ind = 0;
	total = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substitution());
	while ((total < len) && s[total + start])
		total++;
	str = (char *)malloc(sizeof(char) * total + 1);
	if (!str)
		return (NULL);
	while (ind < total && s[start + ind])
	{
		str[ind] = s[start + ind];
		ind++;
	}
	str[ind] = '\0';
	return (str);
}
