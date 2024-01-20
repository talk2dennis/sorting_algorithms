#include "sort.h"

/**
 * selection_sort -  function that sorts an array of integers in ascending
 *			order using the Selection sort algorithm
 * @array: array of integers to be sorted
 * @size: the size of the @array
 * Return: nothing
 */


void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
