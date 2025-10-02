char    *ft_strlowcase(char *str)
{
    int    i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int        i;
    int        new;

    i = 0;
    new = 1;
    ft_strlowcase(str);
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (new == 1)
                str[i] -= 32;
                new = 0;
        }
        else if (str[i] >= '0' && str[i] <= '9')
            new = 0;
        else
            new = 1;
        i++;
    }
    return (str);
}

int    main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(str));
}
