/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 03:35:50 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/22 09:28:11 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pt_dest;
	char	*pt_src;

	i = 0;
	pt_dest = (char *)dest;
	pt_src = (char *)src;
	if (pt_src > pt_dest)
	{
		while (i < n)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	else
	{
		while (i != n)
		{
			pt_dest[n - i - 1] = pt_src[n - i - 1];
			i++;
		}
	}
	return (dest);
}
