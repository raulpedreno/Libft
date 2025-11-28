/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:28:50 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:28:50 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b, const void *c, size_t len)
{
	unsigned char	*ptr_b;
	unsigned char	*ptr_c;
	size_t			i;

	ptr_b = (unsigned char *)b;
	ptr_c = (unsigned char *)c;
	i = 0;
	if (len == 0)
		return (0);
	while (ptr_b[i] == ptr_c[i] && i < len - 1)
		i++;
	return (ptr_b[i] - ptr_c[i]);
}
