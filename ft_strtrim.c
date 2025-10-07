/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:11:38 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/07 12:44:53 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	contset;
	int	conts1;

	contset = 0;
	while (set[contset] != '\0')
	{
		conts1 = 0;
		while (s1[conts1] != '\0')
		{
			if(s1[conts1] != set[contset])
				
		}
		contset ++;
	}
}