/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:58:07 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/26 14:15:23 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

int	ft_ptrlen( uintptr_t address)
{
	
}

void	ft_putaddress(uintptr_t address)
{
	
}

int	ft_printptr(unsigned long ptr)
{
	uintptr_t	address;
	int	len;

	address = ptr;
	len = 0;

	len += write(1, "0x", 2);
	if (address == 0)
		len +=  write(1, "0", 1);
	else
	{
		ft_putaddress(address);
		len += ft_ptrlen(address);
	}
	return (len);
}