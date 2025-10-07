/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:50:41 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/07 10:33:24 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reserva memoria y lo pone a cero
#include "libft.h"
#include <malloc.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*puntero;

	if (nmemb == 0 || size == 0)
		return (puntero);
	puntero = malloc(nmemb);
	ft_memset(puntero, 0, nmemb);
	return (puntero);
}

/*
#include <stdio.h>

int main( void )
{
   long *buffer;

   buffer = (long *)ft_calloc( 40, sizeof( long ) );
   if( buffer != NULL )
      printf( "Allocated 40 long integers\n" );
   else
      printf( "Can't allocate memory\n" );
   free( buffer );
}*/