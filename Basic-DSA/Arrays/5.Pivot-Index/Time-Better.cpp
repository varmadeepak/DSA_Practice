#include <iostream>
using namespace std;
/*
    Link : https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
*/

//<-------APPROACH ----- >

/*
    1. Create Sum Array that stores the sum of array elemnets at index i (Sum[i] = Sum[i-1] + Arr[i]) [PREFIX-SUM ARRAY]
    2. Traverse the main array and find leftSum and rightSum
        a. leftSum = Sum[i] - Arr[i]
        b. rigtSum = Total - Sum[i]; (Total = Sum[n-1])
    4. check leftSum and rightSum
    TC : O (N)
    SC : O(N)
*/

int findEquilibrium(int A[], int n)
{
  //Your code here
  int ans = -1;
  int sum[n];
  int leftSum = 0;
  int rightSum = 0;
  sum[0] = A[0];
  for(int i=1; i<n; i++){
      sum[i] = sum[i-1] + A[i];
  }
  for(int i=1; i<n-1; i++){
      leftSum = sum[i] - A[i];
      rightSum = sum[n-1] - sum[i];
      if(leftSum == rightSum) ans = i;
  }
  return ans;
}
int main(){
    int arr[] = {1,2,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivot = findEquilibrium(arr,n);
    cout << "Pivot Index :::: " << pivot;
    return 0;
}