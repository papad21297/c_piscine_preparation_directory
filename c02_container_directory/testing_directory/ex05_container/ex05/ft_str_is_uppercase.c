int	ft_str_is_uppercase(char *str) {
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (
			((*str < 'A') || (*str > 'Z'))
		)
		{
			res = 0;
		}
		str++;
	}
	return (res);
}
