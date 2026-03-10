/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:09:42 by rmandimb          #+#    #+#             */
/*   Updated: 2026/02/05 16:49:12 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && nmemb > __SIZE_MAX__ / size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, (size * nmemb));
	return (temp);
}
