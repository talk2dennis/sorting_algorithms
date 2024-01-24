#include "sort.h"


/**
 * shell_sort  - Sorting an array of int in ascending
 * order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Des: Using Knuth interval seq.
 */


void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (gap = 1; gap <= size / 3; gap = gap * 3 + 1)
		;
	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
			{
				array[j] = array[j - gap];
			}
			array[j] = tmp;
		}
		print_array(array, size);
		gap /= 3;
	}
}
