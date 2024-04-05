#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, int n);

int	main(void) {
	char	*src;
	char	dest[60];

	src = "Hello! gamers, today we have latest update of stardew...";
	printf("src: \"%s\"\n\n", src);
	printf("***BEFORE***\n");
	printf("dest: \"%s\"\n\n", dest);

	ft_strncpy(dest, src, 6);

	printf("***AFTER***\n");
	printf("dest: \"%s\"\n\n", dest);

	return (0);
}
