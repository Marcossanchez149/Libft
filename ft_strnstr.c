/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:41:50 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 14:28:49 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca un str dentr de otro y devuelve puntero al primer char si lo encuentra
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		littlelen;

	i = 0;
	littlelen = ft_strlen(little);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i + littlelen <= len)
	{
		if (ft_memcmp(&big[i], little, littlelen) == 0)
			return ((char *)&big[i]);
		i ++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
	const char	*largestring = "Foo Var	Baz";
	const char	*smallstring = "r";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring,30);
	printf( "Es '%s'\n",ptr );
}*/