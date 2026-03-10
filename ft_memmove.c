/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:47:00 by rmandimb          #+#    #+#             */
/*   Updated: 2026/02/06 16:43:38 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	if (src == dst)
		return (dst);
	if (s < d && s + n >= d)
		while (n--)
			*(d + n) = *(s + n);
	else
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dst);
}
