/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:29:09 by frushiti          #+#    #+#             */
/*   Updated: 2023/03/05 17:26:31 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (nitems * size == 0 || nitems > 2147483647 / size)
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
