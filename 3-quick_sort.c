#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, size_t size, int left, int right);
void sort_recursion(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

/**
 * swap - swap the intger
 * @a: int to check
 * @b: int to check
 *
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - partition the array
 * @array: array
 * @size: size of the array
 * @left: low indicies
 * @right: right indecies
 *
 * Return: higher indicies
 */
int partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}
	if (array[above] > *pivot)
	{
		swap(array + above, pivot);
		print_array(array, size);
	}
	return (above);

}
/**
 * sort_recursion - Implement the quicksort algorith through recursion
 * @array: an aray o integr to srot
 * @size: the isize of the arrau
 * @left: the starting index of the array partition
 * @right: The ending index of the array partition
 */
void sort_recursion(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = partition(array, size, left, right);
		sort_recursion(array, size, left, part - 1);
		sort_recursion(array, size, part + 1, right);
	}
}

/**
 * quick_sort - sort the array
 * @size: size of the array
 * @array: array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort_recursion(array, size, 0, size - 1);
}
