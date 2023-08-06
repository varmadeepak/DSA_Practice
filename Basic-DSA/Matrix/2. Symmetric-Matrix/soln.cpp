#include <bits/stdc++.h> 
using namespace std;
void printMatrix(vector<vector<int> > matrix,int n, int m){
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << matrix[i][j] << " " ;
        }
        cout << endl;
        
    }
}
vector<vector<int>> transpose(vector<vector<int> > matrix,int n, int m)
    { 
        // int n = matrix.size();
        // int m = matrix[0].size();
        vector<vector<int>> new_matrix;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                new_matrix[j][i] = matrix[i][j];
            }
        }
        return new_matrix;
    }
bool isMatrixSymmetric(vector<vector<int>> matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    if ( n!=m ) return false;
    vector<vector<int>> transposed_matrix = transpose(matrix,n,m);
    printMatrix(transposed_matrix,n,m);
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            if( transposed_matrix[i][j] != matrix[i][j]){
                return false;
            }
        }
    }
    return true;  
}

int main (){
    vector<vector<int>> matrix;
    vector<int> r1= {1,2,3};
    vector<int> r2= {2,4,5};
    vector<int> r3= {3,5,8};
    matrix.push_back(r1);
    matrix.push_back(r2);
    matrix.push_back(r3);

    cout << isMatrixSymmetric(matrix);
    return 0;
}