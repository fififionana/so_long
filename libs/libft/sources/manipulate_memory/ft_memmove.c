/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:56:02 by frushiti          #+#    #+#             */
/*   Updated: 2023/01/19 17:24:26 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destiny;
	size_t	index;

	source = (char *)src;
	destiny = (char *)dest;
	index = 0;
	if (source > destiny)
	{
		while (index < len)
		{
			destiny[index] = source[index];
			index++;
		}
	}
	else
	{
		while (index != len)
		{
			destiny[len - index - 1] = source[len - index - 1];
			index++;
		}
	}
	return (dest);
}
