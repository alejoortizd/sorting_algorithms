#include "sort.h"

/**
 * sub_qsort - Implementing quick_sort on a specific part of the array.
 * @array: An array of integers. Will use a part of the array.
 * @min: Start index of the sub-array. Inclusive.
 * @max: End index and pivot of the sub-array. Exclusive.
 * @size: Size of the full array.
 * Return: Index of the first value higher than @max.
 */

size_t sub_qsort(int *array, size_t min, size_t max, size_t size)
{
	int piv = array[max];
	int lower = array[min];
	int tmp;
	int i;

	if (min < max)
	{

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
	int tmp;
	int i;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] < piv && i != lower)
		{
			tmp = array[lower];
			array[lower] = array[i];
			array[i] = tmp;
			lower++;
			print_array(array, size);
		}
	}
	if (i != size - 1)
	{
		tmp = piv;
		piv = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
	sub_qsort(array, 0, lower - 1);
}
