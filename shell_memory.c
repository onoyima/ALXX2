#include "shell_func.h"

/**
 * bfree_shell - Frees a pointer and sets the address to NULL.
 * Parameters:
 * @ptr: Address of the pointer to free
 * Return: 1 if freed, otherwise 0.
 */
int bfree_shell(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
