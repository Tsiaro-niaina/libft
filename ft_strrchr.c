/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:14:25 by rmandimb          #+#    #+#             */
/*   Updated: 2026/02/05 15:03:55 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	char			*p;
	unsigned char	ch;

	len = ft_strlen(s);
	p = (char *) s + len;
	ch = (unsigned char)c;
	if (ch == '\0')
		return (p++);
	while (p >= s)
	{
		if (*p == ch)
			return (p);
		p--;
	}
	p = NULL;
	return (p);
}
