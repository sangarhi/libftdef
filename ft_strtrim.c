/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:48:38 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/29 01:47:17 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	get_end(char const *s1, char const *set, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ft_strchr(set, s1[len - i - 1]))
		i++;
	return (len - i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*newstr;
	int		len;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	start = get_start(s1, set, len);
	end = get_end(s1, set, len);
	if (start >= end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, end - start + 1);
	return (newstr);
}
