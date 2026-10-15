/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foasman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 16:07:58 by foasman           #+#    #+#             */
/*   Updated: 2026/10/15 16:45:30 by foasman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	const unsigned char	*ptr2;
	ssize_t				i;

	ptr1 = (unsigned char *)dest;
	ptr2 = (const unsigned char *)src;
	if (dest > src)
	{
		i = (ssize_t)n - 1;
		while (i >= 0)
		{
			ptr1[i] = ptr2[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (ssize_t)n)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	return (dest);
}
