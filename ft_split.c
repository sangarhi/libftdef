/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sagarcia <sagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:29:12 by sagarcia          #+#    #+#             */
/*   Updated: 2020/10/26 20:20:18 by sagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_splits(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (s[i] && s[i] == !c)
		count++;

	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			count++;
		i++;
	}

	return (count);
}

static char		*malloc_split(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;

	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);

	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}

	str[i] = '\0';
	return (str);
}

char		**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (count_splits(s, c) + 1));
	if (!array)
		return (NULL);

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			array[j] = malloc_split((s + i), c);
			i += (ft_strlen(array[j]));
			j++;
		}
	}
	array[j] = "\0";
	return (array);
}


int main(void) {
	char *s = "Hola, esta función es una mierda";
	char **sp = ft_split(s, ' ');
	for (int i = 0; sp[i]; ++i) {
		printf("sp[%d]:%s \n", i, sp[i]);
	}
}