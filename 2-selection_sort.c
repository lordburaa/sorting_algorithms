#include "sort.h"

/**
 * seletction_sort - selction sort
 */
void selection_sort(int *array, size_t size)
{
	int imin;
	int temp;
	size_t i, j;

	for(i = 0; i < size -2; i++)
	{
		imin = i;
		for(j = i + 1; j < size; j++)
		{
			if(array[j] < array[imin])
			{
				imin = j;
				
			}

		}
		temp = array[i];
		array[i] = array[imin];
		array[imin] = temp;
		print_array(array, size);
	}
}	
