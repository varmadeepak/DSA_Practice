#include <iostream>
using namespace std;
/*
    Link : https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
*/

//<-------APPROACH ----- >

/*
    1. Compute Total Sum of array
    2. Traverse the array and find leftSum and rightSum
        a. rightSum = TotalSum - Arr[i] - leftSum;
        b. leftSum += Arr[i];
    4. check leftSum and rightSum
    TC : O (N)
    SC : O(1)
*/

int findEquilibrium(int A[], int n)
{
  //Your code here
  int ans = -1;
  int totalSum = 0;
  for(int i=0; i<n; i++){
      totalSum+=A[i];
  }
  int leftSum = 0;
  int rightSum = 0;
  for(int i=0; i<n; i++){
      rightSum = totalSum - leftSum - A[i];
      if(leftSum == rightSum) ans = i;
      leftSum += A[i];
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