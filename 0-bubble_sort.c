#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function that does a bubble sort on an array.
 * @array: Array to be sorted.
 * @size: Size of the given array.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int count, i, temp;

	if (size < 2)
		return;
	for (count = 0; count < size; count++)
		for (i = 0; i < size; i++)
		{
			if ((array[i] > array[i + 1]) && (i != size - 1))
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
}
