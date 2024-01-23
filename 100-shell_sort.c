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
