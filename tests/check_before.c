int	check_before(char *str, char *c)
{
	while (str != c)
	{
		if (*c == *str)
			return (1);
		str++;
	}
	return (0);
}
