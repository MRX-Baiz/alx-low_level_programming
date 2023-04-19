#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: int array
 * @size: of array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
