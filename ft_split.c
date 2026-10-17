/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foasman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:45:59 by foasman           #+#    #+#             */
/*   Updated: 2026/10/16 19:57:07 by foasman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(char c, char ch)
{
	return (c == ch);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!ft_issep(s[i], c))
		{
			count++;
			while (s[i] && !ft_issep(s[i], c))
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	*ft_free_tab(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

static	char	**ft_fill(char **res, char const *s, char c)
{
	int	start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		while (s[i] && ft_issep(s[i], c))
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] && !ft_issep(s[i], c))
			i++;
		res[j] = ft_substr(s, start, i - start);
		if (!res[j])
			return (ft_free_tab(res, j));
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = malloc ((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = ft_fill(res, s, c);
	return (res);
}
