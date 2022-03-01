/**
 * _atoi -  convert a string to an integer
 *
 * @s: pointer a string
 * Return: result
 */
int _atoi(char *s)
{
	int i, j;
	int sign = 1;
	int res = 0;

	i = 0;
	while ((*(s + i) != '\0') && (*(s + i) < 48 || *(s + i) > 57))
	{
		if (*(s + i) == '-')
		{
			sign = -1;
		}
		i++;
	}
	j = i;
	while (*(s + j) >= 48 && *(s + j) <= 57)
	{
		res = res * 10 + *(s + j) - '0';
		j++;
	}
	return (sign * res);
}
