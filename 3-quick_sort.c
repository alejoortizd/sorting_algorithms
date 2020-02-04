#include "sort.h"

/**
 * sub_qsort - Implementing quick_sort on a specific part of the array.
 * @array: An array of integers. Will use a part of the array.
 * @min: Start index of the sub-array. Inclusive.
 * @max: End index and pivot of the sub-array. Exclusive.
 * @size: Size of the full array.
 * Return: Nothing.
 */

void sub_qsort(int *array, int min, int max, size_t size)
{
	int piv = array[max];
	int lower = min;
	int tmp;
	int i;

	if (min < max)
	{
		for (i = min; i < max; i++)
		{
			if (array[i] < piv)
			{
				if (i != lower)
				{
					tmp = array[lower];
					array[lower] = array[i];
					array[i] = tmp;
					print_array(array, size);
				}
				lower++;
			}
		}
		if (lower != max)
		{
			tmp = piv;
			array[max] = array[lower];
			array[lower] = tmp;
			print_array(array, size);
		}
		sub_qsort(array, min, lower - 1, size);
		sub_qsort(array, lower + 1, max, size);
	}
}

/**
 * quick_sort - Quicksort algorithm with Lomuto's partition scheme.
 * @array: An array of integers.
 * @size: Size of @array.
 * Return: Nothing.
 */

void quick_sort(int *array, size_t size)
{
	int piv = array[size - 1];
	int lower = 0;
	int min = 0;
	int max = size - 1;
	int tmp;
	int i = lower - 1;

	if(!array || size <= 1)
		return;
	for (i = min; i < max; i++)
	{
		if (array[i] < piv)
		{
			i++;
			if (i != lower)
			{
				tmp = array[lower];
				array[lower] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
			lower++;
		}
	}
	if (lower != max)
	{
		tmp = piv;
		array[max] = array[lower];
		array[lower] = tmp;
		print_array(array, size);
	}
	sub_qsort(array, min, lower - 1, size);
	sub_qsort(array, lower + 1, max, size);
}
