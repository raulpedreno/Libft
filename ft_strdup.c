/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:31:05 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:31:05 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(s);
	cpy = malloc(len +1);
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, len +1);
	return (cpy);
}
