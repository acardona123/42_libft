/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:03:26 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 00:21:02 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	tot;

	ptr = NULL;
	if (size == 0 || nmemb == 0 || nmemb > ULLONG_MAX / size)
		return (malloc(0));
	tot = nmemb * size;
	ptr = malloc(tot);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < tot)
	{
		ptr[i] = 0;
		++i;
	}
	return ((void *)ptr);
}
