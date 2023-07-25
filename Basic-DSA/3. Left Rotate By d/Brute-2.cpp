#include <iostream>
#include <vector>
using namespace std;
void rotateArrayByD(int *arr,int n,int d){
    vector<int> tempList;
    for(int i=0; i<d; i++){
        tempList.push_back(arr[i]);
    }
    for(int i=0; i<n-d; i++){
        arr[i] = arr[ (i+d)];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = tempList[i-(n-d)];
    }
}
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