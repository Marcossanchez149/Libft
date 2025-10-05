/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:27:36 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 13:43:50 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int						i;
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	i = 0;
	while (d[i] != '\0' && i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h> 

int main() 
{ 
	char dest_str[] = "Tutorialspoint"; 
	char src_str[] = "Tutors";

	puts("source string [src_str] before memmove:-"); 
	puts(dest_str); 

	ft_memmove(dest_str, src_str, sizeof(src_str)); 

	puts("\nsource string [src_str] after memmove:-"); 
	puts(dest_str); 
	return 0; 
}*/