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
