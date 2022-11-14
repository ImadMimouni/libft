/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:50:03 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/14 12:45:04 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && (*f))
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void	ff(unsigned int index, char *s)
// {
// 	index = 32;
// 	s[0] = s[0] - index;
// }

// int main ()
// {
// 	char s[10]= "imad";
// 	ft_striteri(s,ff);
// 	printf("%s\n",s);
// }