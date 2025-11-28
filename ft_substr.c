/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:55 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:32:55 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			s_len;
	unsigned int	i;
	char			*substr;

	i = 0;
	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	if (start > s_len)
	{
		len = 0;
		start = s_len;
	}
	substr = malloc(len * sizeof(char) + 1);
	if (!substr)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
