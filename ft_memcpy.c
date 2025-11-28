/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:29:01 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:29:01 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str_dest;

	i = 0;
	str = (unsigned char *)src;
	str_dest = (unsigned char *)dest;
	if (!src && !dest)
	{
		return (NULL);
	}
	while (i < n)
	{
		str_dest[i] = str[i];
		i++;
	}
	return (dest);
}
