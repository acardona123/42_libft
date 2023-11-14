/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:07:08 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 00:44:44 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	c_char;

	if (!s)
		return (s);
	str = (char *)s;
	c_char = (char)c;
	i = 0;
	while (i < n)
	{
		str[i] = c_char;
		++i;
	}
	return (s);
}
