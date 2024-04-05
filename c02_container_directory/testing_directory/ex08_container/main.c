#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void) {
	char	str[50] = "ONEtwo3$*\\n \\t";
	printf("str: \"%s\"\n", str);
	printf("lowercase version: \"%s\"\n", ft_strlowcase(str));
	return (0);
}
