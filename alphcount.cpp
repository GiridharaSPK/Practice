//imputs string of 100 chars
//counts freq of alph char
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  int i;
  int count[60];
    for(i=0;i<60;i++)
    count[i] = 0;
  char str[100] = "ashlhkrjgvnsJBFKLebDKNCALKRNFVJKVNSKAknvksrndfv5tuep4523$@#TR#aerAWk&(*A";
  for(i=0;i<100;i++){
    if((int)str[i]>=97 && (int)str[i]<122)
    {
      // cout << (int)str[i]-97<<endl ;
      count[(int)str[i]-97] ++;
    }
    if((int)str[i]>=65 && (int)str[i]<90)
    {
      // cout << (int)str[i]-65+26<<endl ;
      count[(int)str[i]-65+26] ++;
    }
  }
  for(i=0;i<60;i++)
  cout<<count[i]<<endl;
  return 0;
}
