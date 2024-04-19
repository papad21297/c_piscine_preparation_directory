#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void) {
	char	str1[100] = "This is ";
	char	str2[] = "programiz.com";
	printf("str1: \"%s\"\n", str1);
	printf("str2: \"%s\"\n", str2);
	//
	strcat(str1, str2);
	//
	printf("with `strcat()` function, str1 becomes:\n");
	printf("str1: \"%s\"\n", str1);
	printf("\n");
	//
	strcpy(str1, "something else is ");
	printf("str1: \"%s\"\n", str1);
	printf("str2: \"%s\"\n", str2);
	//
	ft_strcat(str1, str2);
	//
	printf("with `ft_strcat()` function, str1 becomes:\n");
	printf("str1: \"%s\"\n", str1);
	//
	return (0);
}
