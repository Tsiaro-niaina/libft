/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:24:16 by rmandimb          #+#    #+#             */
/*   Updated: 2026/01/26 10:08:26 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_for_dest;
	unsigned char	*temp_for_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp_for_dest = (unsigned char *) dst;
	temp_for_src = (unsigned char *) src;
	while (n > 0)
	{
		*(temp_for_dest++) = *(temp_for_src++);
		n--;
	}
	return (dst);
}
