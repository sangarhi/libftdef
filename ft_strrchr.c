/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:47:07 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/28 18:25:15 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i > 0 && str[i] != c)
		i--;
	if (str[i] == c)
		return ((char *)str + i);
	return (NULL);
}

int		main()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *src2 = "the cake is a lie !\0I'm hidden lol\r\n";

	printf( "s=%s\n", ft_strrchr(src, ' ') );
	printf( "s=%s\n", strrchr(src2, ' ') );

	return (0);
}
