#include <stdio.h>
#include <string.h>

#define N 12

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void) {
	char	*s;
	char	*s1;

	s = "Hello Abcdefghijkl";
	s1 = "Hello Abcdefghijkz";
	printf("s: \"%s\"\n", s);
	printf("s: \"%s\"\n", s1);
	printf("strncmp -> '%d'\n", strncmp(s, s1, N));
	printf("ft_strncmp -> '%d'\n", ft_strncmp(s, s1, N));
	return (0);
}
