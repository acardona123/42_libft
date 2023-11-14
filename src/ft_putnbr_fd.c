/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:08:45 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 00:53:35 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	np;

	if (n == INT_MIN)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(-1 * (n % 10) + '0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		np = -1 * n;
	}
	else
		np = n;
	if (np >= 10)
		ft_putnbr_fd(np / 10, fd);
	ft_putchar_fd(np % 10 + '0', fd);
}
