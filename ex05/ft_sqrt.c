int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 0;
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			result = i;
			break;
		}
		i++;
	}
	return (result);
}
