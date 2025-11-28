/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:31:25 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:25 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = malloc((s1len + s2len) * sizeof(char) + 1);
	if (!result)
		return (NULL);
	ft_memmove(result, s1, s1len);
	ft_memmove(&result[s1len], s2, s2len);
	result[s1len + s2len] = '\0';
	return (result);
}
