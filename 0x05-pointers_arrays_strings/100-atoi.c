/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: Converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		while (*temp >= '0' && *temp <= '9')
		{
			num = num * 10 + (*temp - '0');
			temp++;
		}
	}
	return (num * sign);
}
