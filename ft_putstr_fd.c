/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:30:30 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:30:30 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (len > i)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
