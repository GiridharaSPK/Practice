#include <iostream>
#include<string.h>

void countsort(int arr[])
{
  int N = sizeof(arr)/sizeof(arr[0]);
  int output[N];

  int count[101], i;
      memset(count, 0, sizeof(count));

  for(i = 0; arr[i]; ++i)
      ++count[arr[i]];

  for (i = 1; i <= 100; ++i)
      count[i] += count[i-1];
  for (i = 0; arr[i]; ++i)
  {
    output[count[arr[i]]-1] = arr[i];
    --count[arr[i]];
  }
  for (i = 0; arr[i]; ++i)
          arr[i] = output[i];
}

int main()
{
  int array[]={1,1,2,1,3,7,20,37,12,8,5,50,90};
  countsort(array);
  return 0;
}
