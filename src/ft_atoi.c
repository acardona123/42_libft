/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:01:46 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 00:18:55 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *nptr)
{
	long int	nb;
	int			neg;
	int			i;

	if (!nptr)
		return (0);
	i = 0;
	while (ft_isinset(nptr[i], " \f\n\r\t\v"))
		++i;
	nb = 0;
	neg = 1 - 2 * (nptr[i] == '-');
	i += (nptr[i] == '+' || nptr[i] == '-');
	if (ft_strlen(nptr + i) > 10)
		return (0);
	while (nptr[i] && ft_isdigit(nptr[i]))
		nb = nb * 10 + nptr[i++] - '0';
	nb *= neg;
	if (nb < INT_MIN || nb > INT_MAX)
		return (0);
	return ((int)nb);
}
