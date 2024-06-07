int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	if (nb <= 1)
	{
		return (2);
	}
	while (1)
	{
		is_prime = 1;
		i = 2;
		while (i * i <= nb)
		{
			if (nb % i == 0)
			{
				is_prime = 0;
				break;
			}
			i++;
		}
		if (is_prime)
		{
			return (nb);
		}
		nb++;
	}
}
