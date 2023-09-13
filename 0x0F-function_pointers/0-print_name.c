/**
 * print_name - function that takes pointer to array of
 * char and pointer to function
 *
 * @name: i explain before
 * @f: as i said
 *
 * Return: no return for void function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
