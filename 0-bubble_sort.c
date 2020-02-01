#include "sort.h"
/**
 * bubble_sort - Entry point
 * @array: parameter to check
 * @size: parameter to check
 * return: list sorted
 */
void bubble_sort(int *array, size_t size)
{
	size_t new_node, i = 0, csize;
	int swap;

	if (array == NULL || size <= 1)
		return;
	csize = size;
	while (csize > 0)
	{
		new_node = 0;
		for (; i < csize - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_node = i + 1;
				print_array(array, size);
			}
		}
		csize = new_node;
	}

}
