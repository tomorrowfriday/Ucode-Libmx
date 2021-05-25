int quicksort(int *array, int low, int high)
{
      int count = 0;
      for (int i = high; i >= low; i--)
      {
            int target = low;
            for (int j = low; j < i; j++)
            {
                  if (array[j] > array[target])
                  {
                        target = j;
                  }
            }
            if (target != i && array[target] > array[i])
            {
                  int n = array[i];
                  array[i] = array[target];
                  array[target] = n;
                  count++;
            }
      }
      return count;
}
