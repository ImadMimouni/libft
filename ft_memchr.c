/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:30:04 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/28 22:10:39 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	while (n--)
	{
		if (*str1 == (unsigned char)c)
			return (str1);
		str1++;
	}
	return (NULL);
}
