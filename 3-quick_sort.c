#include "sort.h"

/**
 * swap - A function that swaps two int
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - A helper function to quick sort that divides the list in two
 * @array: the list of int
 * @low: the first half
 * @high: the second half
 * @size: the size of the @array
 * Return: the partition index
 */

int partintion(int array, int low, int high, size_t size)
{
	int pivot, i, j, tmp;

	pivot = high;
	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

void quick_sort(int arr[], int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = partition(array, low, high, size);
		quick_sort(array, low, index - 1, size);
		quick_sort(array, index + 1, high, size);
	}
}


/**
 * quick_sort - A function that sorts an array of integers in
 *		ascending order using the Quick sort algorithm
 *
 * @array: array of int to the sorted
 * @size: the size of the @array
 * Return: nothing
 */

void quick_sort(int *array, size_t size)
{
	quick_sort(array, 0, size - 1, size)
}
