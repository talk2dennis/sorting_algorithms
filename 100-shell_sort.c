#include "sort.h"

/**
 * replace_ints - change two int in an array.
 * @m: The first integer to swap.
 * @n: The second integer to swap.
 */
void swap_ints(int *m, int *n)
{
	int tmps;

	tmps = *m;
	*m = *n;
	*n = tmps;
}

/**
 * shell_sort - Sorting an array of int in ascending
 * order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Using Knuth interval sequence.
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap_ints(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
