#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Function that does a bubble sort on an array.
 * @array: Array to be sorted.
 * @size: Size of the given array.
 */
void bubble_sort(int *array, size_t size)
{
	unsigned long int i, swap, temp;

	do {
		swap = 0;
		for (i = 0; i < size; i++)
		{
			if (i != size - 1)
			{
				if (array[i] > array[i + 1])
				{
					temp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = temp;
					swap++;
				}
			}
			print_array(array, size);
		}
	} while (swap != 0);
}
