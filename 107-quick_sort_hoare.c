#include "sort.h"

void swap_ints(int *a, int *b);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left, int right);
void quick_sort_hoare(int *array, size_t size);

/**
 * swap_ints - Swap tow integers in an aray
 * @a: the first integer to swap
 * @b: the secon integer to swap
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * hoare_partition - roder a subset of an array of integers
 *		     accoring to hte horare partition scheme
 * @array: the array of integers
 * @size: the size ofthe array
 * @left: The  starting indexo f the subset to order
 * @right: The ending index of thesubset order
 * Return: The final partition index
 */
int hoare_partition(int *array, size_t size, int left, int right)
{
	int pivot, above, below;

	pivot = array[right];
	for (above = left - 1, below = right + 1; above < below;)
	{
		do {
			above++;
		} while (array[above] < pivot);
		do {
			below--;
		} while (array[below] > pivot);

		if (above < below)
		{
			swap_ints(array + above, array + below);
			print_array(array, size);
		}
	}
	return (above);
}
/**
 * hoare_sort - implement the quicksort algorithm through recursion
 * @array: An array of integers to sort
 * @size: the size of the array
 * @left: The Starting index of the aray partition to order
 * @right: The Ending index of the aray partition to order
 */
void hoare_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = hoare_partition(array, size, left, right);
		hoare_sort(array, size, left, part - 1);
		hoare_sort(array, size, part, right);
	}
}

/**
 * quick_sort_hoare - sort an array of integers
 *		      in ascending order using quick sort
 * @array: Array
 * @size: The size of the array
 *
 * Description: Uses the Hoare partition scheme
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	hoare_sort(array, size, 0, size - 1);
}
