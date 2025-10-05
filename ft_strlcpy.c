/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:57:14 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 09:41:51 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	while (i < n && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	i ++;
	return (i);
}

/*
#include <stdio.h> 

int main()
{
	char dest_str[] = "Prueba a cambiar"; 
	char src_str[] = "Ha sido cambiado";
	int resultado;
	resultado = ft_strlcpy(dest_str,src_str,10);
	printf(dest_str);
	return(resultado);
}*/