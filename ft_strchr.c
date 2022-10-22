/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:54:27 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/22 15:33:22 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if (c == 0)
		return ((char *)str);
	return (NULL);
}
