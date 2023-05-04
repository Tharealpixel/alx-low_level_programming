/**
 * get_bit - Gets the value of a bit in a  int
 * @n: The numbre
 * @index: the index of the bt to be returned
 *
 * Return: 1 or 0, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
