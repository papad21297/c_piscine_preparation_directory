#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void) {
	char	*str;

	str = "INCLUDESOMETHING";
	printf("str: \"%s\"\n", str);
	printf("is str uppercase: '%d'\n", ft_str_is_uppercase(str));
	return (0);
}
