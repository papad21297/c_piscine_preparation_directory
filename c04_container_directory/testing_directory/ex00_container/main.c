#include <stdio.h>

int	ft_strlen(char *str);

int	main(void) {
	char	*str;
	int	strlen;

	str = "content!";
	strlen = ft_strlen(str);
	printf("string \"%s\" length: %d\n", str, strlen);
	return (0);
}
