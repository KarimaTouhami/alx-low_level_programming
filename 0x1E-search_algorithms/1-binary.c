#include "stdio.h"
#include "stdlib.h"
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t i = 0;
    size_t left = 0;
    size_t right = size - 1;
    size_t mid = 0;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        mid = (left + right) / 2;

        if (array[mid] < value)
            left = mid + 1;
        else if (array[mid] > value)
            right = mid - 1;
        else
            return (mid);
    }

    return (-1);
}
