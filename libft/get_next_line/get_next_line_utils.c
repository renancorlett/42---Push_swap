/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:12:12 by rcorlett          #+#    #+#             */
/*   Updated: 2024/11/11 11:07:47 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	size_t		i;
	char		*str;
	char		*original_stash;

	if (!stash && !buffer)
		return (NULL);
	if (!stash)
		stash = (char *)ft_calloc(1, sizeof(char));
	original_stash = stash;
	if (ft_strlen(stash) + ft_strlen(buffer) == 0)
	{
		free(stash);
		return (NULL);
	}
	str = ft_calloc(ft_strlen(stash) + ft_strlen(buffer) + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*stash && stash)
		str[i++] = *stash++;
	while (*buffer && buffer)
		str[i++] = *buffer++;
	str[i] = '\0';
	free(original_stash);
	return (str);
}
