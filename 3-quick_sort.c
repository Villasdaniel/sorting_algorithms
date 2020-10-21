#include "sort.h"
/**
 * quick_sort - Entry point
 *@array: unsorted array of integers
 *@size: size of the array
 * Return: 0
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_complement(array, size, 0, size - 1);
}
/**
 *  quick_sort_complement - using quick sort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@p_low: low position
 *@p_high: hight position
 * Return: 0
 */
void quick_sort_complement(int *array, size_t size, int p_low, int p_high)
{
	int pivote = 0;

	if (p_low < p_high)
	{
		pivote = partition(array, size, p_low, p_high);
		quick_sort_complement(array, size, p_low, pivote - 1);
		quick_sort_complement(array, size, pivote + 1, p_high);
	}
}
/**
 * partition - using quick sort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@p_low: low position
 *@p_high: high position
 * Return: min_num
 */
int partition(int *array, size_t size, int p_low, int p_high)
{
	int pivote, min_num, temp_swap, count;

	pivote = array[p_high];
	min_num = p_low;

	for (count = p_low; count < p_high; count++)
	{
		if (array[count] <= pivote)
		{
			temp_swap = array[count];
			array[count] = array[min_num];
			array[min_num] = temp_swap;
			if (count != min_num)
				print_array(array, size);
			min_num++;
		}
	}
	temp_swap = array[count];
	array[count] = array[min_num];
	array[min_num] = temp_swap;
	if (count != min_num)
		print_array(array, size);

	return (min_num);
}
