#include "sort.h"

/**
 * selection_sort - selction sort
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int imin;
	int temp;
	size_t i, j;
	int flag;

	for (i = 0; i < size - 1; i++)
	{
		imin = i;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[imin])
			{
				imin = j;
				flag = 1;
			}
		}
		if (flag)
		{
			temp = array[i];
			array[i] = array[imin];
			array[imin] = temp;
			print_array(array, size);
		}
	}
}
