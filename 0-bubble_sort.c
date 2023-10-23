#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t idx;
	int swp;
	int tmp;

	if (size < 2)
	{
		return;
	}

	for (i = 1; i < size; i++)
	{
		swp = 0;

		for (idx = 0; idx < size - i; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				swp = 1;
				print_array(array, size);
			}
		}
		if (swp == 0)
			break;
	}
}
