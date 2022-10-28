/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:14:47 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/28 21:52:16 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlelen;

	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	needlelen = ft_strlen(needle);
	while (*haystack && needlelen <= len--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, needlelen)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
