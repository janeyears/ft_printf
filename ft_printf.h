#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *input, ...);
int	ft_check_type(va_list *args, const char **input, size_t *count);
int	ft_putchar(char c, size_t *count);
int	ft_putstr(char *str, size_t *count);
int	ft_putptr(unsigned long address, size_t *count);
int	ft_puthex(unsigned long nbr, char c, size_t *count);
int	ft_putnbr(int nb, size_t *count);
int ft_putuns(unsigned int nb, size_t *count);

#endif