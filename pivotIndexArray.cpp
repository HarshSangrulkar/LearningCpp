//find pivot index from which sum of elements to the left of index= sum of elements to the right of index
#include<iostream>
using namespace std;

int
main ()
{
  int k = 5;
  
  int i = 0;
  int j = 5;
  int arr[k] = {18,3,5,7,2,4};
  int sum1 = arr[i];
  int sum2 = arr[j];
  while (k > 0)
    {
      //sum1 = sum1 + arr[i];
      //sum2 = sum2 + arr[j];
      if (sum1 > sum2)
	{
	  j--;
	  sum2 = sum2 + arr[j];
	}
      if (sum2 > sum1)
	{
	  i++;
	  sum1 = sum1 + arr[i];
	}

      k--;
    }
  if (sum1 = sum2)
    {
      cout << i+1;
    }
}
