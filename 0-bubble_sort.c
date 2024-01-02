#include "sort.h"

/**
  * bubble_sort - sorts array of ints in ascending order using Bubble sort.
  * @array: the array that is to be sorted.
  * @size: the number of elements in the array.
  * Description: the function prints out the array each time it swaps two
  * elements.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, edge, j;
	int temp;

	if (array == NULL)
		return;
	edge = size;
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < edge; i++)
		{
			if (i == edge - 1)
				break;
			else if (*(array + i) > *(array + i + 1))
			{
				temp = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = temp;
				print_array((const int *)array, size);
			}
		}
		edge -= 1;
	}
}
