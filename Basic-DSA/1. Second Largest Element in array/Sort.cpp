#include <iostream>
using namespace std;
#include <algorithm>

int main(){
    int arr[] = {12,35,1,10,34,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    cout <<arr[n-2];
    return 0;
}