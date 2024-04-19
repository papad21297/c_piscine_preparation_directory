#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void) {
	char	*s;
	char	*s1;

	s = "Hello";
	s1 = "Hells";
	printf("s: \"%s\"\n", s);
	printf("s: \"%s\"\n", s1);
	printf("strcmp -> '%d'\n", strcmp(s, s1));
	printf("ft_strcmp -> '%d'\n", ft_strcmp(s, s1));
	return (0);
}
