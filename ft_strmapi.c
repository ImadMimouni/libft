/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:50:11 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/16 11:40:16 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*result;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i])
		result[i] = f(i, s[i]);
	result[i] = '\0';
	return (result);
}

// char my_func(unsigned int i, char str)
// {
// 	return (str - 32);
// }

// int main()
// {
// 	char str[10] = "imad";
// 	printf("%s\n", str);
// 	char *ss;
// 	ss = ft_strmapi(str, my_func);
// 	printf("%s\n", ss);
// 	return 0;
// }