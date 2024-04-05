#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void) {
	char	str[50] = "ONEtwo3$*\\n \\t";
	printf("str: \"%s\"\n", str);
	printf("uppercase version: \"%s\"\n", ft_strupcase(str));
	return (0);
}
