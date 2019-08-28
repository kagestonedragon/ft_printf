long long	p_power(int value, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		if (power % 2 == 0)
			return (value * value * p_power(value, power - 2));
		else
			return (value * p_power(value, power - 1));
	}
}
