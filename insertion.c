void insertionSort (int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i;

        while (j > 0 && array[j] < array[j - 1])
        {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
            j--;
        }
    }
}