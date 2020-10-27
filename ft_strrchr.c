/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:47:07 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/26 20:23:12 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
   /*while (str[i])
      i++;*/
   //i--;
	while (str[--i])
	{
      //i--; 
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return ((char *)str + i);
}