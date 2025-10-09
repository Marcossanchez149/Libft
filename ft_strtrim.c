/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:11:38 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/09 14:54:49 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recibe dos strings uno es las letras que hay que quitar al otro
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	contset;
	int	conts1;
	char *result;
	int	constresult;
	size_t len;
	int borrar;

	len = ft_strlen(s1);
	result = malloc(len + 1);
	constresult = 0;
    if (!result)
		return NULL;
	contset = 0;
	while (s1[conts1] != '\0')
	{
		contset = 0;
		borrar = 0;
		while (set[contset] != '\0')
		{
			if(set[contset] == s1[conts1])
				borrar = 1;
			contset ++;
		}
		if(borrar == 0)
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
    const char *chars = "ao";

    char *res = ft_strtrim(s, chars);
    printf("Original: %s\n", s);
    printf("Sin '%s': %s\n", chars, res);

    free(res);
    return 0;
}*/