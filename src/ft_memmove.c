/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:06:53 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 03:44:10 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*usrc;
	unsigned char	*udest;

	usrc = (unsigned char *) src;
	udest = (unsigned char *) dest;
	if (usrc < udest)
		while (n--)
			udest[n] = usrc[n];
	else
		while (n--)
			*udest++ = *usrc++;
	return (dest);
}
