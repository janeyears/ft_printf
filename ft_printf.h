#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *input, ...);
int	ft_check_type(const char input, va_list args);
int	ft_printchar(char c);
int	ft_printstr(char *str);

#endif