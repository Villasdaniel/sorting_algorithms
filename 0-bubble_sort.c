#include "sort.h"

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
        long unsigned int i, j;
        int tmp;

        for (i = 0 ; i < size ; i++)
        {
                for (j = 0 ; j < size - i ; j++)
                {
                        if (array[i] > array[i + 1])
                        {
                                tmp = array[i];
                                array[i] = array[i + 1];
                                array[i + 1] = tmp;
                                print_array(array, size);
                        }
                }
        }
}
