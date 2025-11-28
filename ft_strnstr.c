/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:26 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:32:26 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		if (little[0] == big[j])
		{
			i = 0;
			while (little[i] != '\0' && (j + i) < len
				&& little[i] == big[j + i])
			{
				i++;
				if (little[i] == '\0')
				{
					return ((char *)&big[j]);
				}
			}
		}
		j++;
	}
	return (NULL);
}
