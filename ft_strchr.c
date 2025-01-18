/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:59:20 by enpardo-          #+#    #+#             */
/*   Updated: 2025/01/18 20:29:35 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *) str);
		str++;
	}
	if (ch == '\0')
		return ((char *) str);
	return (0);
}
