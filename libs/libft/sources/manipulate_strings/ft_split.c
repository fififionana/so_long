/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:16:38 by frushiti          #+#    #+#             */
/*   Updated: 2023/09/06 14:16:50 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int	ft_lensubstring(char const *str, int start, char c)
{
	int	length;

	length = 0;
	while (str[start] != c && str[start] != '\0')
	{
		start++;
		length++;
	}
	return (length);
}

static int	ft_countsubstring(char const *str, char c)
{
	int	indice;
	int	count;

	count = 0;
	indice = 0;
	while (str[indice] != '\0')
	{
		while (str[indice] == c && str[indice] != '\0')
			indice++;
		if (str[indice])
			count++;
		while (str[indice] != c && str[indice])
			indice++;
	}
	return (count);
}

char	**ft_split(char const *str, char c)
{
	int		start;
	int		indice;
	int		sublen;
	int		subnumber;
	char	**ptrbox;

	if (!str)
		return (0);
	subnumber = ft_countsubstring(str, c);
	ptrbox = (char **)ft_calloc((subnumber + 1), sizeof(char *));
	start = 0;
	indice = 0;
	while (indice < subnumber)
	{
		while (str[start] && str[start] == c)
			start++;
		sublen = ft_lensubstring(str, start, c);
		ptrbox[indice] = ft_substr(str, start, sublen);
		start = start + sublen;
		indice++;
	}
	return (ptrbox);
}
