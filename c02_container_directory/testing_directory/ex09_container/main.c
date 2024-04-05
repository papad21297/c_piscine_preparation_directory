#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void) {
	char	str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("str: \"%s\"\n", str);
	printf("capitalized version: \"%s\"\n", ft_strcapitalize(str));
	return (0);
}
