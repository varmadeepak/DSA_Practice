#include <iostream>
using namespace std;
/*
    Link : https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
*/

/*
    TC : O(N^2)
*/
int calculateSum(int A[],int left , int right){
    int sum = 0;
    for(int i=left; i<right; i++){
        sum+=A[i];
    }
    return sum;
}
int findEquilibrium(int A[], int n)
{
    int ans = -1;
    int leftSum = 0;
    int rightSum = 0;
    for(int i=1; i<n-1; i++){
        leftSum = calculateSum(A,0,i);
        rightSum = calculateSum(A , i+1 , n);
        if ( leftSum == rightSum ){
            ans = i;
            break;
        }
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