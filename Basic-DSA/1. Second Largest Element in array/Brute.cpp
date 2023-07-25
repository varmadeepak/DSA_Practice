#include <iostream>
using namespace std;
#include <algorithm>
/*
    TC : O ( nlogn) + O {n} = O (nlogn + n)
*/

int main(){
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    int largest = arr[n-1];
    int secondLargest = -1;
    for(int i=n-2; i>=0; i--){  // Corner case when we have duplicates elements (Element duplication can happen when largest element is repeated)
        if(arr[i] != largest){
            secondLargest = arr[i];
            break;
        }
    }
    cout <<secondLargest;
    return 0;
}