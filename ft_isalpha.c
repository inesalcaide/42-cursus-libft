int	ft_isalpha(char *str)
{
	int	is_alpha;
	int	i;

	is_alpha = 1;
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			is_alpha = 0;
		}
		i++;
	}
	return (is_alpha);
}
