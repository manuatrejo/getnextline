/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:01:46 by manguita          #+#    #+#             */
/*   Updated: 2024/08/31 20:41:59 by manguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*punt;

	punt = malloc(number * size);
	if (punt)
	{
		ft_bzero(punt, (number * size));
		return (punt);
	}
	return (NULL);
}

void	*ft_bzero(void *s, size_t n)
{
	char	*memoria_s;

	memoria_s = (char *)s;
	while (n > 0)
	{
		*memoria_s = 0;
		memoria_s++;
		n--;
	}
	return (s);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;

	uc = c;
	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*punt;
	size_t	a;

	a = 0;
	punt = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!punt)
		return (punt);
	while (*s1)
	{
		punt[a] = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		punt[a] = *s2;
		s2++;
		a++;
	}
	punt[a] = '\0';
	return (punt);
}

size_t	ft_strlen(const char *s)
{
	size_t	a;

	a = 0;
	while (*s++)
		a++;
	return (a);
}