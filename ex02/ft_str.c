/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsoulo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 12:04:29 by tsoulo            #+#    #+#             */
/*   Updated: 2020/06/26 12:04:46 by tsoulo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	
	while (str[i] != '\0')
	{
		j=0;
		while (to_find[j] != '\0')
		{
			if (str[i+j] != to_find[j])
			{
			break;	
			}
			j++;
		}
		if(to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
	}
		return (0);
}


