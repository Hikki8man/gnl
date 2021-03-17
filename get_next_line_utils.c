/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchevet <jchevet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:15:16 by jchevet           #+#    #+#             */
/*   Updated: 2020/12/04 14:39:38 by jchevet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	if (!(dst) || !(src))
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	len = ft_strlen(src);
	i = 0;
	while (i < (dstsize - 1) && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	size_t			l;

	l = ft_strlen(s);
	if (start > l)
		len = 0;
	else if (len > l)
		len = l;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!s || !str)
		return (NULL);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[i + start] && i < len)
		{
			str[i] = s[i + start];
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len);
	i = ft_strlen(s1);
	while (i < len - 1)
	{
		str[i] = *(s2++);
		i++;
	}
	str[i] = 0;
	return (str);
}
