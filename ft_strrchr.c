/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:11:22 by enpardo-          #+#    #+#             */
/*   Updated: 2025/01/18 20:43:24 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// tengo que comenzar a iterar en la cadena para encontrar el primer caracter desde el final 
char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	
	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *) str);
		str--;
	}
	if (ch == '\0')
		return ((char *) str);
	return (0);
}
