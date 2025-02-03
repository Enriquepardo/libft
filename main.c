/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:53:22 by irtejeir          #+#    #+#             */
/*   Updated: 2025/02/03 21:26:41 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **tata)
{
	(void)argc;
	ft_putnbr_fd(ft_strlen(tata[1]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isprint(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_tolower(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_toupper(tata[1][2]), 1);
	ft_putchar_fd('\n', 1);
	ft_putendl_fd(ft_strchr(tata[1], 'c'), 1);
	ft_putendl_fd(ft_strrchr(tata[1], 'c'), 1);
	ft_putendl_fd(ft_strdup(tata[1]), 1);
	ft_putendl_fd(ft_strjoin(tata[1], tata[2]), 1);
	ft_putnbr_fd(ft_strncmp(tata[1], tata[2], 15), 1);
	ft_putchar_fd('\n', 1);
	ft_putendl_fd(ft_strnstr(tata[1], tata[2], 25), 1);
	ft_putendl_fd(ft_strtrim(tata[1], tata[2]), 1);
	ft_putnbr_fd(ft_atoi(tata[1]), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}