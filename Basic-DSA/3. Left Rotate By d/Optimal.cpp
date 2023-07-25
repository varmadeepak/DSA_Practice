#include <iostream>
#include <vector>
void Reverse(int arr[],int left , int right){
    while(left <= right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
void rotateArrayByD(int *arr , int n,int d){
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cout << " Input D" << endl;
    cin >> d ;
    rotateArrayByD(arr,n,d);
    for(int i=0; i<n; i++){
        cout << " Arr[" << i << "] = " << arr[i] << endl; 
    }
    return 0;
}