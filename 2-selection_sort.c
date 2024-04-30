#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Function that sorts an array with a selection sort.
 * @array: Array to be sorted.
 * @size: Size of an array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int iter, idx;
	int temp, storage, swaps;

	if (array == NULL)
		return;
	for (iter = 0; iter < size; iter++)
	{
		temp = iter;
		swaps = 0;
		for (idx = iter + 1; idx < size; idx++)
		{
			if (array[temp] > array[idx])
			{
				temp = idx;
				swaps += 1;
			}
		}
		storage = array[iter];
		array[iter] = array[temp];
		array[temp] = storage;
		if (swaps != 0)
			print_array(array, size);
	}
}
