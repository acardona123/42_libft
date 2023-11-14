/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 00:09:49 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 00:17:52 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isinset(char c, char *set)
{
	if (!set)
		return (0);
	while (*set)
		if (c == *(set++))
			return (1);
	return (0);
}
