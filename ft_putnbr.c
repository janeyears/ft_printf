#include "ft_printf.h"

int	ft_putnbr(int nbr, size_t *count)
{
    int res;

    res = 0;
	if (nbr == -2147483648)
	return(ft_putstr("-2147483648", count));
	
    if (nbr < 0)
		{
			res = ft_putchar('-', count);
            if (res == -1)
                return (-1);
			nbr = -nbr;
		}
	if (nbr > 9)
    {
		res = ft_putnbr(nbr / 10, count);
        if (res == -1)
            return (-1);
    }
	return(ft_putchar(nbr % 10 + '0', count));
	return(0);
}
