/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmandimb <rmandimb@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:10:12 by rmandimb          #+#    #+#             */
/*   Updated: 2026/02/05 16:10:10 by rmandimb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_of_int(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len_n;
	char	*str;
	int		ncpy;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ncpy = n;
	if (n < 0)
		ncpy = -n;
	len_n = len_of_int(n);
	str = malloc(sizeof(char) * (len_n + 1));
	if (!str)
		return (NULL);
	str[len_n] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	len_n--;
	while (ncpy > 0)
	{
		str[len_n--] = (ncpy % 10) + '0';
		ncpy /= 10;
	}
	return (str);
}
