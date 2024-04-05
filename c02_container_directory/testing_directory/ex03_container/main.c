#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void) {
	char	*str;

	str = "1243078409 8";
	printf("str: \"%s\"\n", str);
	printf("is str numeric: '%d'\n", ft_str_is_numeric(str));
	return (0);
}
