int	ft_str_is_numeric(char *str) {
	int	res;

	res = 1;
	while (*str != '\0')
	{
		if (
			((*str < '0') || (*str > '9'))
		)
		{
			res = 0;
		}
		str++;
	}
	return (res);
}
