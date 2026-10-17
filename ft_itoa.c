/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foasman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 16:54:20 by foasman           #+#    #+#             */
/*   Updated: 2026/10/16 19:58:55 by foasman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	res;
	int	check;

	res = 0;
	check = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		check = 1;
		n = -n;
	}
	while (n > 0)
	{
		res = res + 1;
		n = n / 10;
	}
	res = res + check;
	return (res);
}

static char	*ft_fill(char *ptr, long nb, int len)
{
	if (nb == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		ptr[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*ptr;
	int		len;

	nb = n;
	len = ft_count_digits(nb);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr = ft_fill(ptr, nb, len);
	ptr[len] = '\0';
	return (ptr);
}
