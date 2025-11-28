/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:25:58 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:25:58 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(tmp_ptr++) = 0;
		n--;
	}
}
