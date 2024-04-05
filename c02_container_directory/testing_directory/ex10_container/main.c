#include <stdio.h>
#define DEST_BUF 20

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void) {
	char	*src;
	char	dest[DEST_BUF];

	src = "Hello! gamers, today we have latest update of stardew...";
	printf("src: \"%s\"\n\n", src);
	printf("***BEFORE***\n");
	printf("dest: \"%s\"\n\n", dest);

	printf("%d\"\n", ft_strlcpy(dest, src, DEST_BUF));
	printf("what's the function `ft_strlcpy()` return: \"");

	printf("***AFTER***\n");
	printf("dest: \"%s\"\n\n", dest);

	return (0);
}
