#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using the
 *		Bubble sort algorithm
 * @array: the array of int to sort
 * @size: the size of the @array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
