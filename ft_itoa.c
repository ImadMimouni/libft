/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:24 by imimouni          #+#    #+#             */
/*   Updated: 2022/11/12 17:08:14 by imimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static int	val_abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

static char	*min_itoa(void)
{
	char	*str;
	long	min;
	int		i;

	i = 0;
	min = 2147483648;
	str = (char *)malloc(sizeof(char) * 12);
	while (min)
	{
		str[i] = (min % 10) + '0';
		min = min / 10;
		i++;
	}
	str[i++] = '-';
	str[i] = '\0';
	return (str);
}

static int	counter(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_reverse(char *s)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		count;
	int		ind;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (ft_reverse(min_itoa()));
	ind = 0;
	count = counter(n) + 1;
	i = n;
	str = (char *)malloc(sizeof(char) * count);
	if (!str)
		return (NULL);
	while (n)
	{
		str[ind] = (val_abs(n) % 10) + 48;
		n = n / 10;
		ind++;
	}
	if (i < 0)
		str[ind++] = '-';
	str[ind] = '\0';
	return (ft_reverse(str));
}
