#include<iostream>
using namespace std;
#include <climits>
// Approach 
/*
    1. Find Maximum Element from array (findLargest function)
    2. Once the maximum element is found , re-loop over the array and find the maximum element \
        ignoring the already found maximum element { if(arr[i] > secondMaximum && arr[i]!=maximumElement) }
    3. Check if secondMaximum has some value (!=INT_MIN)
        a. If yes return secondMaximum
        b. else -1
    4. [10,10,10] is a corner case where the ans returned should be -1 because all 3 elements are largest and there
        is no second largest
*/
/*
    TC : O(N) + O (N) (O(N) for each pass)
*/

int findLargest(int arr[],int n){
    int maxElement = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int findSecondLargest(int arr[],int n){
    int maximumElement = findLargest(arr,n);
    int secondMaximum = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > secondMaximum && arr[i]!=maximumElement){
            secondMaximum = arr[i];
        }
    }
    if( secondMaximum == INT_MIN) return -1;
    return secondMaximum;
}
int main(){

    int arr[] = {10,10,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr,n);
    cout << "Second Largest Element ::: " << secondLargest;
    return 0;
}