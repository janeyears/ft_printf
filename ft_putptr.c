/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:58:07 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/29 12:51:37 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_putptr(unsigned long address, size_t *count)
{
	int	res;

	if(!address)
		return(ft_putstr("(nil)", count));
	res = ft_putstr("0x", count);
	if (res == -1)
		return(-1);
	return (ft_puthex(address, 'x', count));
}