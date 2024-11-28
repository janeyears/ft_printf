#include "ft_printf.h"

int main(void)
{
	char *str = "and welcome";
	printf("Hello %s World\n", str);
	ft_printf("Hello %s World\n", str);
	return 0;
}