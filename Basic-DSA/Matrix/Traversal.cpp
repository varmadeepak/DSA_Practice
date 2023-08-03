#include <bits/stdc++.h>
using namespace std;

int main(){
    // int arr[3][2] = {
    //     {2,2},
    //     {1,0},
    //     {0,1}
    // };
    vector<vector<int>> arr;
    vector<int> r1 = {2,2};
    vector<int> r2 = {1,0};
    vector<int> r3 = {0,1};
    arr.push_back(r1);
    arr.push_back(r2);
    arr.push_back(r3);
    int n = arr.size();
    int m = arr[0].size();
    cout << "2D Traversal " << endl;
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
        
    }
    return 0;
}