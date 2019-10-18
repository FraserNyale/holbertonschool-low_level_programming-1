#include "holberton.h"
#include <stdlib.h>

/**
  * _realloc - ...
  * @ptr: ...
  * @old_size: ...
  * @new_size: ...
  *
  * Return: ...
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		for (i = 0; i <= old_size; i++)
		{
			nptr[i] = ((int *) ptr)[i];
		}
	}

	free(ptr);
	return (nptr);
}
