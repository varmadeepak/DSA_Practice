#include <bits/stdc++.h> 
using namespace std;

int main (){
    vector<vector<int>> matrix;
    vector<int> r1= {1,2,3};
    vector<int> r2= {4,5,6};
    vector<int> r3= {7,8,9};
    matrix.push_back(r1);
    matrix.push_back(r2);
    matrix.push_back(r3);
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> matrix_new(m,vector<int>(n,0));

    for(int i=0; i<n; i++){
        for(int j=m-1; j>=0; j--){
            matrix_new[m-1-j][i] = matrix[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix_new[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}