#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void) {
	char	*str;

	str = "genius";
	printf("str: \"%s\"\n", str);
	printf("is str alpha: '%d'\n", ft_str_is_alpha(str));
	return (0);
}
