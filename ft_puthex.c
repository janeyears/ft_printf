/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:53:26 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/29 15:58:43 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long nbr, char c, size_t *count)
{
	int	res;

	if (nbr > 15)
	{
		res = ft_puthex(nbr / 16, c, count);
		if (res == -1)
			return (-1);
	}
	if (c == 'X')
	{
		return (ft_putchar("0123456789ABCDEF"[nbr % 16], count));
	}
	else
	{
		return (ft_putchar("0123456789abcdef"[nbr % 16], count));
	}
}
