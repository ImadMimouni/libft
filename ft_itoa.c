/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imimouni <imimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:24 by imimouni          #+#    #+#             */
/*   Updated: 2022/10/30 11:08:06 by imimouni         ###   ########.fr       */
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

static int	alloc_counter(int n)
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

static char	*reverse_string(char *str, int len)
{
	char	swap;
	int		limit;
	int		i;

	i = 0;
	limit = (len / 2);
	while (i <= limit)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	int		ind;
	int		i;
	char	*str;

	if (n == -2147483648)
		return (reverse_string(min_itoa(), 10));
	ind = 0;
	count = alloc_counter(n) + 1;
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
	if (!i)
		str[ind++] = '0';
	if (i < 0)
		str[ind++] = '-';
	str[ind] = '\0';
	return (reverse_string(str, count - 2));
}
