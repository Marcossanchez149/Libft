/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 10:47:04 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:11:28 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca la última aparación del caracter c en s y devulve un puntero a esta
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	size_t	ssize;

	ssize = ft_strlen(s);
	i = ssize;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i --;
	}
	if ((char)c == 0)
		return ((char *)&s[ssize]);
	return (0);
}

/*
#include <stdio.h> 
 
int main(void)
{
  char buffer1[40] = "computer program";
  char * ptr;
  int    ch = 'p';
 
  ptr = ft_strrchr( buffer1, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n",
            ch, buffer1, ptr );
 
}*/