void	string_tolower(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
}
