/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:37:53 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/07 10:59:44 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Crea un nuevo espacio de memoria y copia lo que haya en el puntero que recibe
#include "libft.h"
#include <malloc.h>

char	*ft_strdup(const char *s)
{
	char	*punt;
	int		size;

	size = ft_strlen(s);
	punt = malloc(size);
	ft_strlcpy(punt, s, size);
	return (punt);
}

/*
#include <stdio.h>
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   if ((newstr = ft_strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);
	free(newstr);
   return 0;
}*/