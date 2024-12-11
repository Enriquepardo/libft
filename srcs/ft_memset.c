/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:23:11 by enpardo-          #+#    #+#             */
/*   Updated: 2024/12/11 15:28:49 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *str, int i, size_t len)
{
	unsigned char	*copy;
	
	copy = str;
	while (i > 0)
	{
		*copy = (unsigned char)i;
		copy++;
		len--;
	}
	return (str);
}