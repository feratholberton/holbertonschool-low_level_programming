/**
 * *_strcpy - copy a string
 * @dest: pointer of destination of copied string
 * @src: pointer of the source string
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int chars = 0;

	while (src[chars] != '\0')
	{
		dest[chars] = src[chars];
		chars++;
	}
	dest[chars] = '\0';

	return (dest);
}
