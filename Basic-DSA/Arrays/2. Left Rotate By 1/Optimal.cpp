#include <iostream>
using namespace std;
void rotateArrayByOne(int *arr,int n)
{
    int firstElement = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = firstElement;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    rotateArrayByOne(arr,n);
    for(int i=0; i<n; i++){
        cout << " Arr[" << i << "] = " << arr[i] << endl; 
    }
    return 0;
}