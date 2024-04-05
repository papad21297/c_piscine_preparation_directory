#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void) {
	char	*str;

	str = "IncludingSomething";
	printf("str: \"%s\"\n", str);
	printf("is str lowercase: '%d'\n", ft_str_is_lowercase(str));
	return (0);
}
