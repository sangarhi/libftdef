/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:20:35 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/28 21:28:03 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((const char*)src)[i];
		i++;
	}
	return (dest);
}
