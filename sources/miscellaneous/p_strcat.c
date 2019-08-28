char		*p_strcat(char *destination, const char *source)
{
	char	*begin;
	begin = destination;
	while (*destination)
		destination++;
	while (*source)
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
	return (begin);
}
