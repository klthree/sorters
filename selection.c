void selection(int array[], int size)
{
    int lowestIndex;
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[j + 1])
            {
                lowestIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[lowestIndex];
        array[j] = array[temp];
    }
}