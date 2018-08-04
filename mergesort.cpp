#include <iostream>

awrfgaervoid merge(int arr[], int f, int m, int l)
{
  int i=j=k=0;
  int n1 = m-f+1;
  int n2 = r-m;
  int L[n1];
  int R[n2];

  for (i = 0; i < n1; i++)
         L[i] = arr[l + i];
  for (j = 0; j < n2; j++)
         R[j] = arr[m + 1+ j];

  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
       arr[k] = L[i];
       i++;
    }
    else
    {
       arr[k] = R[j];
       j++;
    }
    k++;
  }
}

void mergesort(int array[], int f, int l)
{
  if(l<r){
    int p = (f+l)/2;
    mergesort(array,f,m);
    mergesort(array,m,l);
    merge(array,f,m,l);
  }

}

void main()
{
  int array[]={1,1,2,1,3,7,20,37,12,8,5,50,90};
  int i=0,j=0;
  int N = sizeof(array)/sizeof(array[0]);
  int MS[N];

}
