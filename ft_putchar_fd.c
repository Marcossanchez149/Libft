/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:58:35 by marcsan2          #+#    #+#             */
/*   Updated: 2025/10/23 10:12:02 by marcsan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes in a file descriptor the char c
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}
