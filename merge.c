/**
 * Use merge sort to sort an array
 */

#include "sorters.h"

/**
 * Function mergeSort to recursively sort array into halves while calling merge function
 */
void mergeSort (int array[], int size, int start, int end)
{
    int mergerArray[size];
    int mid;

    if (start < end)
    {
        mid = (start + end) / 2;

        mergeSort (array, size, start, mid);
        mergeSort (array, size, mid + 1, end);

        merge (array, mergerArray, start, mid, end);
    }
    else
    {
        return;
    }
}

/**
 * Merges recursively sorted halves from mergeSort into temporary array mergerArray
 * and then copies back into original
 */
void merge (int array[], int mergerArray[], int start, int mid, int end)
{
    // declare variables. leftIndex tracks start of left sorted array,
    // rightIndex of right sorted, and mergerIndex tracks temp sorting array
    int leftIndex = start;
    int rightIndex = mid + 1;
    int mergerIndex = start;

    // While the halves to be sorted both have elements to compare
    while (leftIndex <= mid && rightIndex <= end)
    {
        // Conditional to set the lowest array element of the two halves
        // equal to the mergerArray index, incrementing one at a time
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

    // after the comparisons are made, one or more elements will remain
    // in the recursively sorted haves. These loops copy the remaining already
    // sorted elements over
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

    // copy back to original array from sorted temp array
    for (int i = start; i <= end; i++)
    {
        array[i] = mergerArray[i];
    }
}