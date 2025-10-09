/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:28:56 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/09 09:17:26 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatena dos strings reservando con malloc su tamaño
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*punt;
	int		conta;
	int		contb;

	size = ft_strlen(s1) + ft_strlen(s2);
	punt = malloc(size);
	if (punt == NULL)
		return (NULL);
	conta = 0;
	contb = 0;
	while (s1[conta] != '\0')
	{
		punt[contb] = s1[conta];
		conta ++;
		contb ++;
	}
	conta = 0;
	while (s2[conta] != '\0')
	{
		punt[contb] = s2[conta];
		conta ++;
		contb ++;
	}
	return (punt);
}

/*
#include <stdio.h> 
int main(void)
{
	char	*prueba;

	prueba = ft_strjoin("A ver si", "Esto funciona");
	printf(prueba);
	free(prueba);
}*/