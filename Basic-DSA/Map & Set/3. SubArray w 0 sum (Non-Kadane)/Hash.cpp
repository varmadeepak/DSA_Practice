#include <bits/stdc++.h>
using namespace std;

/*
    TC : O (N logn )
    SC : O (N)
*/


int findMaximumLengthOfZeroSubArray(vector<int> arr, int n){
    unordered_map<int,int> mpp;
    int currSum = 0;
    int maxSum = 0;

    for(int i=0; i<n; i++){

        //1. Find current sum
        currSum += arr[i];

        //2. Check if currSum == 0 , if yes , update maxSum
        if( currSum == 0 ) maxSum = i+1;
        //3. Else check if currSum exists in hashmap , if exists , check for max condition 
        else if( mpp.find(currSum) != mpp.end()) maxSum = max( maxSum , i-mpp[currSum] );
        //4. else store the current sum and index in hM
        else mpp[currSum] = i;
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