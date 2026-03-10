/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:13:01 by rmandimb          #+#    #+#             */
/*   Updated: 2026/02/06 15:05:01 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenword(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

static int	ft_count_words(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			s += ft_lenword(s, c);
		}
		else
			s++;
	}
	return (counter);
}

static void	*free_str(char	**str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, ft_lenword(s, c));
			if (!strs[i++])
				return (free_str(strs));
			s += ft_lenword(s, c);
		}
		else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}
