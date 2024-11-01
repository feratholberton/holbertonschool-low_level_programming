/**
 * _atoi - convert string to an integer
 * @s: string
 * Return: Intigers from string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int number_started = 0;
	int digit;

	while (*s)
	{
		if (*s == '-' && !number_started)
		{
			sign *= -1;
		}
		else if (*s == '+' && !number_started)
		{
		}
		else if (*s >= '0' && *s <= '9')
		{
			number_started = 1;
			digit = *s - '0';

			if (sign == 1 && result > (2147483647 - digit) / 10)
			{
				return (2147483647);
			}
			if (sign == -1 && result > (2147483648 - digit) / 10)
			{
				return (-2147483648);
			}

			result = result * 10 + digit;
		}
		else if (number_started)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
