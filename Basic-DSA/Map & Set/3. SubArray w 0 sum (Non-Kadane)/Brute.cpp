#include <bits/stdc++.h>
using namespace std;

/*
    TC : O (N^2)
    SC : O (1)
*/

int findMaximumLengthOfZeroSubArray(vector<int> arr, int n){
   int currSum;
   int maxSum = INT_MIN;

   for(int i=0; i<n; i++){
    currSum = 0;
        for(int j=i; j<n; j++){
            currSum += arr[j];

            if( currSum == 0 ) {
                maxSum = max( maxSum, j-i+1);
            }
        }
   }
   return maxSum;
}
int main(){
    vector<int> arr {15,-2,2,-8,1,7,10,23};
    int n = arr.size();
    int maximumLengthOfZeroSubArray = findMaximumLengthOfZeroSubArray(arr,n);

    cout << " Maximum Subarray zero sum is of length : " << maximumLengthOfZeroSubArray << endl;
    return 0;
}