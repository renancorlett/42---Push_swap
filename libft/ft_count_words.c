/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcorlett <rcorlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 11:32:46 by rcorlett          #+#    #+#             */
/*   Updated: 2025/01/30 11:32:49 by rcorlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_words(char const *s, char c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		if (*s != c)
		{
			wordcount++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (wordcount);
}
