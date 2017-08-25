/**
 * Use merge sort to sort an array
 */

void sort (int array[], int start, int end)
{
    int mid = (start + end) / 2;

    sort (array, start, mid);
    sort (array, mid + 1, end);

    merge(array, start, mid, mid + 1, end);
}

void merge (int array[], int low, int mid1, int mid2, int end)
{

}