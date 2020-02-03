#include "sort.h"
/**
 * selection_sort - Entry point
 * @array: parameter to check
 * @size: parameter to check
 * return: list sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swap;

	if (array == NULL || size <= 1)
		return;
	for (i = 0; i <= size; i++)
	{
		min = i;
		for (j = 0; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap = array[i];
			array[i] = array[min];
			array[min] = swap;
			print_array(array, size);
		}
	}
}
