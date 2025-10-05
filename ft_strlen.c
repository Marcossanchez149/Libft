/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:53:19 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 13:41:01 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Devuelve el tamaño
#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(int argc, char ** argv)
{
 
  if ( argc != 2 )
    printf( "Usage: %s string\n", argv[0] );
  else
    printf( "Tiene un tamaño de %i\n", ft_strlen( argv[1] ));
}*/