/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:58:43 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/12 13:23:23 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sizeofint(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		size;

	i = 0;
	size = sizeofint(n);
	result = (char *) malloc(size);
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*resultado;
	unsigned int		prueba;

	prueba = -1;
	resultado = ft_itoa(prueba);
	
}*/