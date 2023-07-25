#include <iostream>
using namespace std;
#include <climits>

/*

    1/ Consider Array as stream of data 
    2/ While traversing the array keep track of largest and second largest element , 
        lets say you are at index 7 , if index 7 has largest element then index 6 could have been 
        second largest ---- [1][Line-20]
    3/ To implement (2) in if(arr[i] > firstMax condition first assign second = first , then first = arr[i];
    4/ There can be a case when we reach the end of array and second largest element is the last element but condition 1
        will fail for that we have condition 2
    5/ Check if the current element is greater than the secondLargest element and also make sure the current element != Largest
        if yes , then make it second largest 
    6/ Corner Case for (5) : [3,8,10,5,10,12]
    7/ For secondSmallest change the condition 1,2 to 
        a. if(arr[i] < firstSmallest)
        b. else if(arr[i] < secondSmallest && arr[i] != firstSmallest)


*/


/*
    TC : O(N)
`*/

int findSecondLargest(int arr[] , int n){
    int firstMax = arr[0];
    int secondMax = -1;
    // int firstSmallest = arr[0];
    // int secondSmallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] < firstMax){ // 1
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] > secondMax && arr[i] != firstMax){ //2
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main(){
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr,n);
    cout << "Second Largest Element is : " << secondLargest;
    return 0;
}