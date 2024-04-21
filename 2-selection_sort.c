#include "sort.h"

/**
 * selection_sort - sorts the list with selection sort
 * @array: - input of array
 * @size: - input of size of array
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, change_num, n;

	for (i = 0; i < size; i++)
	{
		tmp = i;
		n = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
				n += 1;
			}
		}
		change_num = array[i];
		array[i] = array[tmp];
		array[tmp] = change_num;
		if (n != 0)
		print_array(array, size);
	}
}
