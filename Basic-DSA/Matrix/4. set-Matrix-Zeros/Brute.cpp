#include <bits/stdc++.h> 
using namespace std;

/*
    1. Traverse the 2-d Array and check if any element is zero , if yes make entire row and column -1
    2. ***** Note that -1 cna be replaced where there is actual zero as well , for that put -1 to element only if > 0
    3. Above 2 steps ensures that wherever we have zero , its row and column are marked -1 
    3. Re-iterate the array and check if we have any -1 , replace -1 with zero

    TC : O (~N^3) Exact : O((N*M)*(N + M)) + O(N*M)
*/
// This Brute force works only if elements of matrix are >=0

void markRow(vector<vector<int>> &matrix , int n , int m , int i){
    for(int k=0; k<m; k++)
    {
        if(matrix[i][k] > 0) matrix[i][k]=-1;
    }
}
void markCol(vector<vector<int>> &matrix , int n , int m , int j){
    for(int l=0; l<n; l++)
    {
        if(matrix[l][j] > 0) matrix[l][j]=-1;
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
    

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                // make row -1
                markRow(matrix,n,m,i);
                // make col -1
                markCol(matrix,n,m,j);
                
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1) matrix[i][j] = 0;
        }
    }

    cout << "Print the Updated Matrix " << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}