#include <bits/stdc++.h>
using namespace std;
int findMinElementsToMakeArrayUnique(vector<int> arr, int n){
    unordered_map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    return arr.size()-mpp.size();
}
int main(){
    vector<int> arr {1,2,3,1,2};
    int n = arr.size();
    int minElements = findMinElementsToMakeArrayUnique(arr,n);

    cout << " Minimum ELements ot make array unique are : " << minElements << endl;
    return 0;
}