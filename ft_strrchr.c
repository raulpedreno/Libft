/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:35 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:32:35 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	cc;

	len = ft_strlen(s);
	cc = (char)c;
	while (len > 0 && s[len] != cc)
	{
		len--;
	}
	if (s[len] == cc)
		return ((char *)&s[len]);
	else
		return (0);
}
