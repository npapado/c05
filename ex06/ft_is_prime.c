int ft_is_prime(int nb);

int ft_is_prime(int nb)
{
    int i;
    int is_prime;

    i = 2;
    is_prime = 1;
    if (nb <= 1)
    {
        return (0);
    }
    while (i * i <= nb)
    {
        if (nb % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (is_prime);
}
