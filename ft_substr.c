/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foasman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:14:18 by foasman           #+#    #+#             */
/*   Updated: 2026/10/15 22:25:47 by foasman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;
	size_t	alloc_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		alloc_len = s_len - start;
	else
		alloc_len = len;
	ptr = malloc(alloc_len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, alloc_len + 1);
	return (ptr);
}
