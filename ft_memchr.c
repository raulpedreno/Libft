/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:28:25 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:28:25 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*ptr_b;
	unsigned char	ptr_c;
	size_t			i;

	ptr_b = (unsigned char *) b;
	ptr_c = (unsigned char) c;
	i = 0;
	while (i < len)
	{
		if (ptr_b[i] == ptr_c)
		{
			return (&ptr_b[i]);
		}
		i++;
	}
	return (NULL);
}
