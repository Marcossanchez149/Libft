/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:11:38 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/12 13:17:29 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recibe dos strings uno es las letras que hay que quitar al otro
#include "libft.h"

static int	check_letter(char letra, char const *set)
{
	int		errase;
	int		contset;

	contset = 0;
	errase = 0;
	while (set[contset] != '\0')
	{
		if (set[contset] == letra)
			errase = 1;
		contset ++;
	}
	return (errase);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		conts1;
	char	*result;
	int		constresult;
	int		errase;
	size_t	size;

	size = (ft_strlen(s1));
	result = malloc(size + 1);
	constresult = 0;
	if (!result)
		return (NULL);
	conts1 = 0;
	while (s1[conts1] != '\0')
	{
		errase = check_letter(s1[conts1], set);
		if (errase == 0)
		{
			result[constresult] = s1[conts1];
			constresult ++;
		}
		conts1 ++;
	}
	return (result);
}

/*
#include <stdio.h>
int main() {
	const char *s = "hola mundo";
	const char *chars = "mun";

	char *res = ft_strtrim(s, chars);
	printf("Original: %s\n", s);
	printf("Sin '%s': %s\n", chars, res);

	free(res);
	return 0;
}*/