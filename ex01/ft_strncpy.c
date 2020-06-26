/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:02:36 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/26 12:03:55 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src ,unsigned int n)
{
	unsigned index;
	
	index =0;
	while (src != '\0' && (index < n ))
	{
		dest[index] = src[index];
		index++;
	}	
	dest[index] = '\0';
	return (dest);
}


