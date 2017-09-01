/**
 * Binary search function
 */

void binarySearch(int array[], int size, int value)
{
   int start = 0;
   int end = size - 1;

   // loop while there are 
   while (start <= end)
   {
      int mid = (end + start) / 2;

      if (value == array[mid])
      {
         printf("%i found\n", value);
         return;
      }
      else if (value <= array[mid])
      {
         end = mid - 1;
      }
      else
      {
         start = mid + 1;
      }
   }

   printf("%i not found\n", value);
   return;
}