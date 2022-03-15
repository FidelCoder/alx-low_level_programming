/**
 * _isalpha - checks if character is lower or uppercase
 * @c : character to be checked in ASCII
 *
 * Return: On success 1
 * On error, 0 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
