/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:57 by rcorlett          #+#    #+#             */
/*   Updated: 2024/10/24 15:12:07 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int    main(void)
{
    char    *s1 = "Acorda, ";
    char    *s2 = "menino!";
    char    *result;
    
    result = ft_strjoin(s1, s2);
    if (result)
    {
        printf("Result = %s\n", result);
        free(result);
    }
    else
    {
        printf("Result failed\n");
    }
    return (0);
}*/
