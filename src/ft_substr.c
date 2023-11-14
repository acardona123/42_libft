/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:13:17 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 01:13:07 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	size_t	i;
	size_t	lens;
	char	*sub;

	lens = ft_strlen(s);
	if (start >= lens)
		return (ft_calloc(1, sizeof(char)));
	if (lens - start < len)
		sub = malloc((lens - start + 1));
	else
		sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = -1;
	while (s[++i + start] && i < len)
		sub[i] = s[start + i];
	sub[i] = 0;
	return (sub);
}
