/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpedreno <rpedreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 09:32:08 by rpedreno          #+#    #+#             */
/*   Updated: 2025/11/25 09:32:08 by rpedreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char			*new;
	unsigned int	i;

	new = malloc(ft_strlen(s) * sizeof(char) + 1);
	i = 0;
	if (!new)
		return (NULL);
	while (i < ft_strlen(s))
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
