/**
 * _strlen - get the length of a string
 * @charString: Texto to measure
 * Return: lenght
 */

int _strlen(char *charString)
{
	int length = 0;

	while (charString[length] != '\0')
	{
		length++;
	}

	return (length);
}
