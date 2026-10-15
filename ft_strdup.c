/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foasman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 19:44:46 by foasman           #+#    #+#             */
/*   Updated: 2026/10/15 20:01:58 by foasman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	ft_memcpy(ptr, s, len + 1);
	return (ptr);
}
