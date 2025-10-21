/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:28:56 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/14 12:02:48 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatena dos strings reservando con malloc su tamaño
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sizetotal;
	size_t	sizefirst;
	char	*punt;

	sizefirst = ft_strlen(s1) + 1;
	sizetotal = sizefirst + ft_strlen(s2);
	punt = (char *)malloc(sizetotal * sizeof(char));
	if (punt == NULL)
		return (NULL);
	ft_strlcpy(punt, s1, sizefirst);
	ft_strlcat(punt, s2, sizetotal);
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