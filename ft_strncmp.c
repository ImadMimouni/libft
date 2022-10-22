/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:24:39 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/22 15:22:26 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
