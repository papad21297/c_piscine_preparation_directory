#include <stdio.h>

void	*ft_print_memory(void *, unsigned int);

int	main(void)
{

	char	empty[] = "";

	char	longstr[] = "This string contains more than 16 characters";

	char	str[] = "Bonjour les amin";
	char	str1[] = "ches\t\n\tc  est  fo";
	char	str2[] = "u\ttout\tce qu on ";
	char	str3[] = "peut faire avec\t";
	char	str4[] = "\n\tprint_memory\n\n";
	char	str5[] = "\n\tlol.lol\n \0";

	ft_print_memory(empty, sizeof(empty));

	ft_print_memory(longstr, sizeof(longstr));
	
	ft_print_memory(str, sizeof(str));
	ft_print_memory(str1, sizeof(str1));
	ft_print_memory(str2, sizeof(str2));
	ft_print_memory(str3, sizeof(str3));
	ft_print_memory(str4, sizeof(str4));
	ft_print_memory(str5, sizeof(str5));

	return (0);
}

