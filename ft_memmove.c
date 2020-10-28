/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:21:44 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/28 21:30:49 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ndst;
	const char	*nsrc;

	ndst = (char *)dst;
	nsrc = (char *)src;
	if (dst > src)
	{
		while (len--)
			ndst[len] = nsrc[len];
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
