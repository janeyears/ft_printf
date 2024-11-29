/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:52:38 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/29 14:23:42 by ekashirs         ###   ########.fr       */
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
int	ft_check_type(va_list *args, const char **input, size_t *count)
{
	const char	cur = **input;
	if(ft_validate(cur) != 1)
		return(ft_putchar('%', count), ft_putchar(cur, count));
	if (cur == 'c')
		return(ft_putchar(va_arg(*args, int), count));
	else if (cur == 's')
		return(ft_putstr(va_arg(*args, char *), count));
	else if (cur == 'p')
		return(ft_putptr(va_arg(*args, unsigned long), count));
	else if (cur == 'd' || cur == 'i')
		return(ft_putnbr(va_arg(*args, int), count));
	else if (cur == 'u')
		return(ft_putuns(va_arg(*args, unsigned int), count));
	else if (cur == 'x' || cur == 'X')
		return(ft_puthex(va_arg(*args, unsigned int), cur, count));
	else if (cur == '%')
		return(ft_putchar('%', count));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	count;
	int		res;

	if (!input)
		return (-1);
	count = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			res = ft_check_type(&args, &input, &count);
			if (res == -1)
				return (va_end(args), -1);
		}
		else
		{
			res = ft_putchar(*input, &count);
			if (res == -1)
				return (va_end(args), -1);
		}
		input++;
	}
	return (va_end(args), count);
}
