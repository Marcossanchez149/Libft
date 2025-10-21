/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:22:11 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/14 13:13:33 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len ++;
	return (len);
}

static char	*creation_word(char const *s, int len)
{
	char	*word;
	int		cont;

	word = (char *) malloc(sizeof(char) * (len +1));
	if (!word)
		return (NULL);
	cont = 0;
	while (cont < len)
	{
		word[cont] = s[cont];
		cont ++;
	}
	word[cont] = '\0';
	return (word);
}

static void	free_split(char **s, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(s[i]);
		i ++;
	}
	free(s);
}

static char	**principal_loop(char const *s, int words, char c, char	**result)
{
	int		j;

	j = 0;
	while (s[0] != '\0')
	{
		while (s[0] != '\0' && s[0] == c)
			s ++;
		if (s[0] != '\0' && s[0] != c)
		{
			result[j] = creation_word(s, word_len(s, c));
			if (!result)
			{
				free_split(result, words);
				return (NULL);
			}
			else
				j ++;
		}
		while (s[0] != '\0' && s[0] != c)
			s ++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		cont;
	int		i;

	cont = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			cont ++;
		i ++;
	}
	if (!s)
		return (NULL);
	result = (char **)malloc (sizeof (char *) * (cont + 1));
	if (!result)
		return (NULL);
	result = principal_loop(s, cont, c, result);
	return (result);
}

/*
int main(void)
{
    char **result;
    int i;
    result = ft_split("lorem ipsumadipiscing elus. Suspendisse", ' ');
    i = 0;
    while (result[i])
    {
        printf("Palabra %d: %s\n", i, result[i]);
        i++;
    }
	free(result);
    return 0;
}*/