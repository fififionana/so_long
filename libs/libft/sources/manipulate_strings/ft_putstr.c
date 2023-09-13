/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frushiti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:16:15 by frushiti          #+#    #+#             */
/*   Updated: 2023/09/06 14:16:25 by frushiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (!str)
		index = write(1, "(null)", 6);
	else
	{
		while (str[index] != '\0')
		{
			write (1, &str[index], 1);
			index++;
		}
	}
	return (index);
}
