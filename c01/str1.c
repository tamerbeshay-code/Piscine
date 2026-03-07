int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// While the string doesn't reach the null the counter "i" will be increased
	while (str[i])
		i++;

	// In the end the function returns the number of characters counted
	return (i);
}