#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void) {
	//
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "rials";
	char *ret;
	//
	ret = strstr(haystack, needle);
	printf("with `strstr()`\n");
	printf("The substring is: %s\n", ret);
	//
	ret = ft_strstr(haystack, needle);
	printf("with `ft_strstr()`\n");
	printf("The substring is: %s\n", ret);
	//
	return (0);
}
