void	p_bzero(char *str, int n)
{
	if (!str)
		return ;
	while (n--)
		str[n] = '\0';
}
