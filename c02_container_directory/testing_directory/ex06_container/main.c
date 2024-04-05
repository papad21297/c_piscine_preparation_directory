#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void) {
	char	*str;

	str = "ONEtwo3$*\\n \\t";
	printf("str: \"%s\"\n", str);
	printf("is str printable: '%d'\n", ft_str_is_printable(str));
	return (0);
}
