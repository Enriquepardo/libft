/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 14:21:24 by enpardo-          #+#    #+#             */
/*   Updated: 2025/01/18 19:09:44 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

//now all the fucking functions:

int	ft_isalnum(int c);														//DONE
int	ft_isalpha(int c);														//DONE
int	ft_isascii(int c);														//DONE
int	ft_isdigit(int c);														//DONE
int	ft_isprint(int c);														//DONE
void	*ft_memset(void *b, int i, size_t len);								//DONE
void	ft_bzero(void *str, size_t n);										//DONE
int	*ft_memcpy(void *dest, const void *src, size_t n);						//WIP
void	*ft_memmove(void *dest, const void *src, size_t n);					//WIP
char	*ft_strchr(const char *srt, int c);									//WIP
char	*ft_strrchr(const char *str, int c);								//WIP
void	*ft_memchr(const void *str, int c, size_t n);						//WIP
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);	//WIP
size_t	ft_strlen(const char *str);											//DONE
size_t	ft_strlcpy(char *dest, const char *src,size_t dstsize);				//WIP
size_t	ft_strlcat(char *dest, const char *src,size_t dstsize);				//WIP
int	ft_toupper(int c);														//WIP
int	ft_tolower(int c);														//WIP
int	ft_strncmp(const char *s1, const char *s2, size_t n);					//WIP
int	ft_atoi(const char *str);												//WIP

# endif