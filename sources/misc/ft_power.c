long long   ft_power(int n, int power)
{
    if (power < 0)
        return (0);
    else if (power == 0)
        return (1);
    else
    {
        if (power % 2 == 0)
            return (n * n * ft_power(n, power - 2));
        else
            return (n * ft_power(n, power - 1));
    }
}
