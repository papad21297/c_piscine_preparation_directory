#include <stdio.h>
// #include <string.h>
#include <bsd/string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void) {
	char	str1[100] = "abcdefg";
	//
	char	str2[100] = "0123456789";
	printf("str2: \"%s\"\n", str2);
	printf("\n");
	//
	printf("before `strncat()`:\n");
	printf("str1: \"%s\"\n", str1);
	printf("\n");
	//
	strncat(str1, str2, 9);
	printf("after `strncat()`:\n");
	printf("str1: \"%s\"\n", str1);
	printf("\n");
	//
	strcpy(str1, "abcdefg");
	printf("before `strlcat()`:\n");
	printf("str1: \"%s\"\n", str1);
	printf("\n");
	//
	size_t	dest_size = sizeof(str1);
	size_t	cat_length = strlcat(str1, str2, 20);
	printf("after `strlcat()`:\n");
	printf("str1: \"%s\"\n", str1);
	printf("cat length: '%zu'", cat_length);
	printf("\n");
	//
	return (0);
}
