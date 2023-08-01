#include<bits/stdc++.h>
using namespace std;
/*
    TC : O (logn) (fetch / store) [Ordered Map] [ All 3 Cases ]
    TC : O (1) for Average and Best Case , O(N) for worst case 
*/
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout <<"Input the Array ::" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Creating Map 
    unordered_map<int,int> mpp; // Stores all values in sorted order
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int input;
    cout << " Input the number to get the frequency of::" << endl; 
    cin >> input;

    cout << "The Frequency of element" << input << " Is - " << mpp[input] << endl;
    return 0;
}