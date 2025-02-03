/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:32:46 by enpardo-          #+#    #+#             */
/*   Updated: 2025/02/03 21:27:26 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*extract_word(const char *s, char c, int *index)
{
	int		start;
	int		end;
	char	*word;

	while (s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	end = *index;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, &s[start], end - start + 1);
	return (word);
}

static void	free_result(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (j < word_count)
	{
		result[j] = extract_word(s, c, &i);
		if (!result[j])
		{
			free_result(result, j);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("  hello world 42  ", ' ');
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		i++;
	}
	return (0);
}
