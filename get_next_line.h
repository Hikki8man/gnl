/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchevet <jchevet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:23:55 by jchevet           #+#    #+#             */
/*   Updated: 2020/12/04 14:42:03 by jchevet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_var {
	char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;
	char		*tmp;
}				t_var;

int				get_next_line(int fd, char **line);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *src);
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_substr(const char *s, unsigned int start, size_t len);

#endif
