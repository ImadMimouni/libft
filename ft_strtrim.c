/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:57:12 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/28 23:29:30 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		size_of_suffix;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_of_suffix = ft_strlen(s1);
	while (size_of_suffix && ft_strchr(set, s1[size_of_suffix]))
		size_of_suffix--;
	trimmed = ft_substr((char *)s1, 0, size_of_suffix + 1);
	return (trimmed);
}
