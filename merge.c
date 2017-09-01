/**
 * Use merge sort to sort an array
 */

#include "sorters.h"

void sort (int array[], int mergerArray[], int start, int end)
{
    int mid;

    if (start < end)
    {
        mid = (start + end) / 2;

        sort (array, mergerArray, start, mid);
        sort (array, mergerArray, mid + 1, end);

        merge (array, mergerArray, start, mid, end);
    }
    else
    {
        return;
    }
}

void merge (int array[], int mergerArray[], int start, int mid, int end)
{
    int leftIndex = start;
    int rightIndex = mid + 1;
    int mergerIndex = start;

    while (leftIndex <= mid && rightIndex <= end)
    {
        if (array[leftIndex] <= array[rightIndex])
        {
            mergerArray[mergerIndex] = array[leftIndex];

            mergerIndex++;
            leftIndex++;
        }
        else
        {
            mergerArray[mergerIndex] = array[rightIndex];

            mergerIndex++;
            rightIndex++;
        }
    }

    while (leftIndex < mid + 1)
    {
        mergerArray[mergerIndex] = array[leftIndex];
        mergerIndex++;
        leftIndex++;
    }

    while (rightIndex <= end)
    {
        mergerArray[mergerIndex] = array[rightIndex];
        mergerIndex++;
        rightIndex++;
    }

    for (int i = start; i <= end; i++)
    {
        array[i] = mergerArray[i];
    }
}