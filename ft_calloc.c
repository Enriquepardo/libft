/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:13:17 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/04 18:54:34 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
		total_size = nmemb * size;
	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	if (total_size > 0)
		ft_memset(pt, 0, total_size);
	return (pt);
}
