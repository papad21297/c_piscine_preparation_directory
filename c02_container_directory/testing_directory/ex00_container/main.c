#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void) {
	char	*src;
	char	dest[60];

	src = "Hello! gamers, today we have latest update of stardew...";
	printf("src: \"%s\"\n\n", src);
	printf("***BEFORE***\n");
	printf("dest: \"%s\"\n\n", dest);
	printf("***AFTER***\n");
	printf("dest: \"%s\"\n\n", ft_strcpy(dest, src));

	return (0);
}
