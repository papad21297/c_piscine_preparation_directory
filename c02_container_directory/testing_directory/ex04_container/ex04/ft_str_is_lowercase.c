int	ft_str_is_lowercase(char *str) {
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (
			((*str < 'a') || (*str > 'z'))
		)
		{
			res = 0;
		}
		str++;
	}
	return (res);
}
