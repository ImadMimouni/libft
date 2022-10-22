/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:54:37 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/20 03:51:29 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*destt;
	unsigned const char	*str;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	destt = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (i < n)
	{
        destt[i] = str[i];
        i++;
	}
	return (dest);
}

// int main ()
// {
//     char s[50] = "abcdefg";
//     char ss[30];
//     ft_memcpy(s,s+2,2);
//     // memcpy(s,s+2,2);
//     puts(s);
//     return 0;
// }