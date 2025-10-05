
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:02:51 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/05 09:51:05 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatena dos strings y devuelve el tamaño de ambos incluyendo el valor \0
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destsize;
	size_t	srcsize;
	int		i;
	int		j;


	destsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	i = destsize;
	j = 0;
	if (size == 0)
		return (destsize);
	while (i < size && src[j] != '\0')
	{
		dst[i] = src[j];
		i ++;
		j++;
	}
	dst[i + 1] = '\0';
	return (destsize + srcsize);
}


/*
int main()
{
    char first[] = "This is ";
    char last[] = "a long string";
    int r;
    int size = 64;
    char buffer[size];

    ft_strlcpy(buffer,first,size);
	puts(buffer);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}*/