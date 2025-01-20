/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:04:33 by enpardo-          #+#    #+#             */
/*   Updated: 2025/01/20 18:34:03 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (n > 0)
	{
		while (s1[i] && s2[i] && (s1[i] == s2[i]))
		{
			i++;
		}
		n--;
	}
	return (s1[i] - s2[i]);
}
