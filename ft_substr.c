/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:59:24 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/09 09:17:20 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Crea un substring desde start de s hasta el len
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		cont;
	char	*punt;

	punt = malloc(len);
	cont = 0;
	if (punt == NULL)
		return (NULL);
	while (start < len && s[start] != '\0')
	{
		punt[cont] = s [start];
		start ++;
		cont ++;
	}
	return (punt);
}

/*
#include <stdio.h> 
int main(void)
{
	char	*resultado;
	
	resultado = ft_substr("Hola que tal estas",2,4);
	printf(resultado);
	free(resultado);
}*/