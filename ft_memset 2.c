/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset 2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:23:25 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/26 20:15:14 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
		((unsigned char *)str)[i++] = (unsigned char)c;
	

	return(str);

	/*unsigned char 	*new_str;
	unsigned char	new_c;
	size_t i;

	new_str = str;
	new_c = c;
	i = 0;

	while (i++ < n)
		*new_str++ = new_c;
	return(str);*/
	
}

int		main ()
{
	char str[50] = "hdihsdededoh";

	ft_memset(str, 'a', 10);
	puts(str);

}