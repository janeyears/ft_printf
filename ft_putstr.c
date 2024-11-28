/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekashirs <ekashirs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:45:23 by ekashirs          #+#    #+#             */
/*   Updated: 2024/11/26 12:52:34 by ekashirs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, size_t *count)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		res = ft_putchar(s[i], count);
		if (res == -1)
			return (-1);
		i++;
	}
	return (0);
}
