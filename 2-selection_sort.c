#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array:sorted array
 * @size:size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t idx;
	size_t i;
	size_t m_idx;
	int tmp;

	for (idx = 0; idx < size - 1; idx++)
	{
		m_idx = idx;
		for (i = idx + 1; i < size; i++)
		{
			if (array[i] < array[m_idx])
				m_idx = i;
		}

		if (m_idx != idx)
		{
			tmp = array[idx];
			array[idx] = array[m_idx];
			array[m_idx] = tmp;
			print_array(array, size);
		}
	}
}
