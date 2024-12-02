/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:52:38 by ekashirs          #+#    #+#             */
/*   Updated: 2024/12/02 13:11:01 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_validate(char c)
{
	int		i;
	char	*a;

	i = 0;
	a = "cspdiuxX%";
	while (a[i])
	{
		if (c == a[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_type(va_list *args, const char input, size_t *count)
{
	if (ft_validate(input) != 1)
		return (ft_putchar('%', count), ft_putchar(input, count));
	if (input == 'c')
		return (ft_putchar(va_arg(*args, int), count));
	else if (input == 's')
		return (ft_putstr(va_arg(*args, char *), count));
	else if (input == 'p')
		return (ft_putptr(va_arg(*args, unsigned long), count));
	else if (input == 'd' || (input) == 'i')
		return (ft_putnbr(va_arg(*args, int), count));
	else if (input == 'u')
		return (ft_putuns(va_arg(*args, unsigned int), count));
	else if (input == 'x' || (input) == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), input, count));
	else if (input == '%')
		return (ft_putchar('%', count));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	count;

	if (!input)
		return (-1);
	count = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			if (ft_check_type(&args, *input, &count) == -1)
				return (va_end(args), -1);
		}
		else
		{
			if (ft_putchar(*input, &count) == -1)
				return (va_end(args), -1);
		}
		input++;
	}
	return (va_end(args), count);
}
