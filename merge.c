/**
 * Use merge sort to sort an array
 */

void sort (int array[], int start, int end)
{
    int mid = (start + end) / 2;
    int size = end - start;

    sort (array, start, mid);
    sort (array, mid + 1, end);

    merge(array, size, start, mid, mid + 1, end);
}

void merge (int array[], int size, int low, int mid1, int mid2, int end)
{
    int left = low;
    int right = mid2;
    int mergeDex = low;

    int merger[size];

    while (left <= mid1 && right <= end)
    {
        if (array[left] < array[right])
        {
            merger[mergeDex] = array[left];
        }
        else
        {
            merger[mergeDex] = array[right];
        }

        left++;
        right++;
        mergeDex++;
    }

    while (left <= mid1)
    {
        merger[mergeDex] = array[left];

        left++;
        mergeDex++;
    }

    while (right <= mid1)
    {
        merger[mergeDex] = array[right];

        right++;
        mergeDex++;
    }
}