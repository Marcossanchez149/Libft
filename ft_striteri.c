/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:19:21 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/16 10:01:26 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Envia el puntero char a char de un string a una funcion que recibe
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s) +1;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
