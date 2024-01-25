#include "sort.h"

/**
 * swap_ints - swap tow integer in an raay
 * @a: hte first integer ot swap
 * @b: the second integer to wap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * shell_sort - srot an arary of integer in ascending 
 * @array: an array of integers
 * @size: the size ofthe array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, i , j;

	if (array == NULL || size < 2)
		return;

	for (gap - 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >=1; gap /= 3)
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

