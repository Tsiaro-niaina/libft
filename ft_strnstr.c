/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:14:17 by rmandimb          #+#    #+#             */
/*   Updated: 2026/01/26 10:08:46 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lenlittle;
	char	*b;

	lenlittle = ft_strlen(little);
	b = (char *) big;
	if (lenlittle == 0)
		return (b);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j] && big[i + j])
		{
			j++;
			if ((j == len && j == lenlittle) || j == lenlittle)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
