/**
 * swap_int - my function
 *
 * @firstInt: int 1
 * @secondInt: int 2
 *
 * Return: void
 */

void swap_int(int *firstInt, int *secondInt)
{
	int temp = *firstInt;

	*firstInt = *secondInt;
	*secondInt = temp;
}
