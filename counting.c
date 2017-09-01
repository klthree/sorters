/**
 * Counting sort function for range of integers
 */

#define MAX 65536
void countingSort (int array[], int size)
{
    // declare counting array
    int countingArray[MAX] = {0};

    // count instances of number as index for counting array
    for (int i = 0; i < size; i++)
    {
        countingArray[array[i]]++;
    }

    // set index for putting numbers back in array
    int arrayIndex = 0;

    // take non-zero values f
    for (int i = 0; i < MAX; i++)
    {
        if (countingArray[i] == 0)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < countingArray[i]; j++)
            {
                array[arrayIndex] = i;
                arrayIndex++;
                j++;
            }
        }
    }
}