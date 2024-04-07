#include <stdio.h>
#include <string.h>

/*
  The strcmp() compares two strings char wise.
  ~ If the strings are equal, the function returns 0.
  ~ > 0 if the first non-matching character in str1 is greater (in
    ASCII) than that of str2.
  ~ < 0 if the first non-matching character in str1 is lower (in
    ASCII) than that of str2.

  We have 3 cases
  1) "hello", "hello"   -> Strings are equal.
  2) "hel  ", "hello"   -> Strings are different s1 < s2
  3) "hello", "hel"     -> Strings are different s1 > s2
*/

int	ft_strcmp(char *s1, char *s2)
{
	// Reduntant: ...*s1 && *s2)
	// this *s1 is for when strings are equal
	//
	// "yeah, equal, but Aren't we at the bottom?"
	//      ||
	//     \||/
	// hello\0
	// hello\0
	//     /||\
	//      ||
	while (*s1 == *s2 && *s1)
		++s1, ++s2;
	return (*s1 - *s2);
}

int	main(void) {
	char	*s;
	char	*s1;

	s = "Hello";
	s1 = "Hello";
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("ft_strcmp -> %d\n", ft_strcmp(s, s1));
	printf("strcmp ->    %d\n", strcmp(s, s1));
	printf("\n");
	printf("\n");

	s = "Hello";
	s1 = "Hel";
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("ft_strcmp -> %d\n", ft_strcmp(s, s1));
	printf("strcmp ->    %d\n", strcmp(s, s1));
	printf("\n");
	printf("\n");

	s = "Hel";
	s1 = "Hello";
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("ft_strcmp -> %d\n", ft_strcmp(s, s1));
	printf("strcmp ->    %d\n", strcmp(s, s1));
	printf("\n");
	printf("\n");

	s = "";
	s1 = "";
	printf("%s\n", s);
	printf("%s\n", s1);
	printf("ft_strcmp -> %d\n", ft_strcmp(s, s1));
	printf("strcmp ->    %d\n", strcmp(s, s1));
	printf("\n");
	printf("\n");
	return (0);
}
