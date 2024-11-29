#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	char *str = "World";
	char c = '!';
	char *ptr = str;
	int i = 42;
	unsigned int nbr = 4294967295;
	int min = INT_MIN;
	int max = INT_MAX;
	char *nullstr = NULL;

	printf("🐥 Test case: c\n");
	printf("Chars printed in original: %d \n", printf("Hello world%c\n", c));
	ft_printf("Chars printed in custom: %d \n", ft_printf("Hello world%c\n", c));

	printf("🐥 Test case: s\n");
	printf("Chars printed in original: %d \n", printf("Hello %s!\n", str));
	ft_printf("Chars printed in custom: %d \n", ft_printf("Hello %s!\n", str));

	printf("🐥 Test case: p\n");
	printf("Chars printed in original: %d \n", printf("%p\n", ptr));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%p\n", ptr));

	printf("🐥 Test case: d\n");
	printf("Chars printed in original: %d \n", printf("%d\n", i));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%d\n", i));

	printf("🐥 Test case: i\n");
	printf("Chars printed in original: %d \n", printf("%i\n", i));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%i\n", i));

	printf("🐥 Test case: u\n");
	printf("Chars printed in original: %d \n", printf("%u\n", nbr));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%u\n", nbr));

	printf("🐥 Test case: x\n");
	printf("Chars printed in original: %d \n", printf("%x\n", i));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%x\n", i));

	printf("🐥 Test case: X\n");
	printf("Chars printed in original: %d \n", printf("%X\n", i));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%X\n", i));

	printf("🐥 Test case: %%\n");
	printf("Chars printed in original: %d \n", printf("%%\n"));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%%\n"));

	printf("🐥 Test case: int_max & int_min\n");
	printf("Chars printed in original: %d \n", printf("%i & %i\n", max, min));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%i & %i\n", max, min));

	printf("🐥 Test case: NULL s\n");
	printf("Chars printed in original: %d \n", printf("Hello %s!\n", nullstr));
	ft_printf("Chars printed in custom: %d \n", ft_printf("Hello %s!\n", nullstr));

	printf("🐥 Test case: diffirent flasgs in a row\n");
	printf("Chars printed in original: %d \n", printf("Hello %s %d%c\n", str, i, c));
	ft_printf("Chars printed in custom: %d \n", ft_printf("Hello %s %d%c\n", str, i, c));
/*
	printf("🐥 Test case: Many single %% in different places\n");
	printf("Chars printed in original: %d \n", printf("%6yka%5\n"));
	ft_printf("Chars printed in custom: %d \n", ft_printf("%6yka%5\n"));
*/
	return (0);
}
