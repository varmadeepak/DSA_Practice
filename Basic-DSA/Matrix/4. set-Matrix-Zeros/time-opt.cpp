#include <bits/stdc++.h> 
using namespace std;

/*
    1. Create dummyy row-matrix of size = number of rows in current matrix
    2. Create dummyy col-matrix of size = number of cols in current matrix
    3. Traverse the original matrix and if any element is = 0 enter 1 in corresponding place in row and
        col matrix
    3. After traversring whole matrix , traverse both rowmatrix and colMatrix , and wherever we have 1 make 
        corresponding rows and cols = 0

    TC : O (2 * (M*N))
*/
// This Brute force works only if elements of matrix are >=0
void setMatrixZeros(vector<vector<int>> &matrix,int n , int m){

    vector<int> rowMatrix(n,0);
    vector<int> colMatrix(m,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                rowMatrix[i] = 1;
                colMatrix[j] = 1;        
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rowMatrix[i] == 1 || colMatrix[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }

}
int main (){
    vector<vector<int>> matrix;
    vector<int> r1= {0,1,2,0};
    vector<int> r2= {3,4,5,2};
    vector<int> r3= {1,3,1,5};
    matrix.push_back(r1);
    matrix.push_back(r2);
    matrix.push_back(r3);
    int n = matrix.size();
    int m = matrix[0].size();
    setMatrixZeros(matrix,n,m);
    cout << "Print the Updated Matrix " << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}