/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:08:02 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/21 12:01:21 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Crea un nuevo nodo y añada el contenido
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lis;

	lis = (t_list *)malloc(sizeof(t_list));
	if (!lis)
		return (NULL);
	lis->content = content;
	lis->next = NULL;
	return (lis);
}
