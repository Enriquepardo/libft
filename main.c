/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:27:28 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/04 18:32:54 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    // Prueba de isalpha
    char c = 'A';
    printf("isalpha('%c'): %d\n", c, isalpha(c));
    
    // Prueba de isdigit
    c = '5';
    printf("isdigit('%c'): %d\n", c, isdigit(c));
    
    // Prueba de isalnum
    c = 'Z';
    printf("isalnum('%c'): %d\n", c, isalnum(c));
    
    // Prueba de isascii
    c = 127;
    printf("isascii('%c'): %d\n", c, isascii(c));
    
    // Prueba de isprint
    c = ' ';
    printf("isprint('%c'): %d\n", c, isprint(c));
    
    // Prueba de strlen
    char *str = "Hola";
    printf("strlen('%s'): %zu\n", str, strlen(str));
    
    // Prueba de memset
    char buffer[10];
    memset(buffer, 'A', 9);
    buffer[9] = '\0';
    printf("memset: %s\n", buffer);
    
    // Prueba de bzero
    bzero(buffer, 5);
    printf("bzero: %s\n", buffer);
    
    // Prueba de memcpy
    char src[] = "Test";
    memcpy(buffer, src, 5);
    printf("memcpy: %s\n", buffer);
    
    // Prueba de memmove
    char overlap[] = "123456";
    memmove(overlap + 2, overlap, 4);
    printf("memmove: %s\n", overlap);
    
    // Prueba de strlcpy
    char dest[10];
    strlcpy(dest, "Libft", sizeof(dest));
    printf("strlcpy: %s\n", dest);
    
    // Prueba de strlcat
    strlcat(dest, "42", sizeof(dest));
    printf("strlcat: %s\n", dest);
    
    // Prueba de toupper
    printf("toupper('a'): %c\n", toupper('a'));
    
    // Prueba de tolower
    printf("tolower('A'): %c\n", tolower('A'));
    
    // Prueba de strchr
    printf("strchr('Hello', 'e'): %s\n", strchr("Hello", 'e'));
    
    // Prueba de strrchr
    printf("strrchr('Hello', 'l'): %s\n", strrchr("Hello", 'l'));
    
    // Prueba de strncmp
    printf("strncmp('abc', 'abd', 2): %d\n", strncmp("abc", "abd", 2));
    
    // Prueba de memchr
    printf("memchr('abcdef', 'c', 6): %s\n", (char *)memchr("abcdef", 'c', 6));
    
    // Prueba de memcmp
    printf("memcmp('abc', 'abc', 3): %d\n", memcmp("abc", "abc", 3));
    
    // Prueba de strnstr
    printf("strnstr('Hello World', 'World', 11): %s\n", strnstr("Hello World", "World", 11));
    
    // Prueba de atoi
    printf("atoi('42'): %d\n", atoi("42"));
    
    // Prueba de calloc
    int *arr = (int *)calloc(5, sizeof(int));
    if (arr)
    {
        printf("calloc: %d\n", arr[0]);
        free(arr);
    }
    
    // Prueba de strdup
    char *dup = strdup("Libft");
    if (dup)
    {
        printf("strdup: %s\n", dup);
        free(dup);
    }
	
	// Prueba de ft_substr
    char *substr = ft_substr("Hello World", 6, 5);
    printf("ft_substr: %s\n", substr);
    free(substr);
    
    // Prueba de ft_strjoin
    char *joined = ft_strjoin("Hello", " World");
    printf("ft_strjoin: %s\n", joined);
    free(joined);
    
    // Prueba de ft_strtrim
    char *trimmed = ft_strtrim("  Hello  ", " ");
    printf("ft_strtrim: %s\n", trimmed);
    free(trimmed);
    
    // Prueba de ft_split
    char **split = ft_split("Hello World", ' ');
    printf("ft_split: %s %s\n", split[0], split[1]);
    free(split[0]);
    free(split[1]);
    free(split);
    
    // Prueba de ft_itoa
    char *itoa_res = ft_itoa(-42);
    printf("ft_itoa: %s\n", itoa_res);
    free(itoa_res);
    
    return 0;
}