/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:22:28 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 12:39:50 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca la primera aparación del caracter c en s y devulve un puntero a esta
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	size_t	ssize;

	ssize = ft_strlen(s);
	i = 0;
	while (i < ssize)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i ++;
	}
	return ((char *)&s[i]);
}

/*
#include <stdio.h> 
 
int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'a';
 
  ptr = ft_strchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}*/