#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, last_i = 0;
	int aux;

	for (i = 0; i < size; i++)
	{
		last_i = i /* this works? */

		for (j = i + 1; i < size && j < size; j++)
		{
			if (array[i] > array[j])
			{
				/* swap */
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				i = j;

				print_array(array, size);
			}
		}

		i = last_i + 1;
		/* i out of range ??*/
	}
}
