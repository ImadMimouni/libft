/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:43:47 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/20 02:25:39 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = b;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}

// int main () {
//    char str[50]= "This is string.h library function";
//    ft_memset(str + 2,'_',7);
//    puts(str);
//    return(0);
// }