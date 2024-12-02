/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:58:07 by ekashirs          #+#    #+#             */
/*   Updated: 2024/12/02 12:59:50 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long address, size_t *count)
{
	int	res;

	res = 0;
	if (!address)
		return (ft_putstr("(nil)", count));
	res = ft_putstr("0x", count);
	if (res == -1)
		return (-1);
	return (ft_puthex(address, 'x', count));
}
