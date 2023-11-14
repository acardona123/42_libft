/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardona <acardona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:12:46 by acardona          #+#    #+#             */
/*   Updated: 2023/11/14 01:10:08 by acardona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	_ft_strtrim_offsetstart(const char *s, char const *set);
static size_t	_ft_strtrim_offsetend(const char *s, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	offsetstart;
	size_t	offsetend;
	size_t	lentot;

	if (!s1)
		return (ft_substr("", 0, 1));
	offsetstart = _ft_strtrim_offsetstart(s1, set);
	offsetend = _ft_strtrim_offsetend(s1, set);
	lentot = ft_strlen(s1);
	return (ft_substr(s1, offsetstart, lentot - offsetstart - offsetend));
}

static size_t	_ft_strtrim_offsetstart(const char *s, char const *set)
{
	size_t	i;

	i = 0;
	while (s[i] && ft_isinset(s[i], (char *)set))
		++i;
	return (i);
}

static size_t	_ft_strtrim_offsetend(const char *s, char const *set)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(s);
	if (l == 0)
		return (0);
	i = 0;
	while (i < l - 1 && ft_isinset(s[l - 1 - i], (char *)set))
		++i;
	return (i);
}
