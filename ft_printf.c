/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:52:38 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/26 13:56:13 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const char input, va_list args)
{
	int	len;

	len = 0;
	if (input == 'c')
		len += ft_printchar(va_arg(args, char));
	else if (input == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (input == 'p')
		len += ft_printptr(va_arg(args, unsigned long));
	else if (input == 'd' || input == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (input == 'u')
		len += ft_printuns(va_arg(args, unsigned int));
	else if (input == 'x' || input == 'X')
		len += ft_printhex(va_arg(args, unsigned int), input);
	else if (input == '%')
		len += ft_percentage();
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int	i;
	int	total;
	
	i = 0;
	total = 0;
	va_start(args, input);
	while (input[i] != '\0')
		{
			if (input[i] == '%' && input[i + 1] != '\0')
			{
				total += ft_check_type(input[i + 1], &args);
				i++;
			}
			else
				total += ft_printchar(input[i]);
			i++;
		}
	va_end(args);
	return (total);
}
