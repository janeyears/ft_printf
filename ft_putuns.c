/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:53:43 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/29 15:54:18 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int nbr, size_t *count)
{
	int	res;

	res = 0;
	if (nbr > 9)
	{
		res = ft_putuns(nbr / 10, count);
		if (res == -1)
			return (-1);
	}
	return (ft_putchar(nbr % 10 + '0', count));
}
