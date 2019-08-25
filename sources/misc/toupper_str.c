int     toupper_str(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    return (0);
}
