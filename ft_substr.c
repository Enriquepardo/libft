/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:45:25 by enpardo-          #+#    #+#             */
/*   Updated: 2025/01/23 21:10:44 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			slen;
	size_t			lenmax;
	char			*substr;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= len)
		return (ft_strdup(""));
	lenmax = slen - start;
	if (len > lenmax)
		len = lenmax;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
