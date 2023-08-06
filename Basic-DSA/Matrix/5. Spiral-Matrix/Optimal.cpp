#include <bits/stdc++.h>
using namespace std;
/*
    Link : https://leetcode.com/problems/spiral-matrix/
*/

void printSprialOrder(vector<vector<int>> matrix,int n , int m){
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;

    while( (top <= bottom) && (left <= right) ){
        // print right
        for(int i=left; i<=right; i++){
            cout << matrix[top][i] << " ";
        }
        top++;

        // print bottom
        for(int j = top; j<=bottom; j++){
            cout << matrix[j][right] << " ";
        }
        right--;

        // print left
        if(top <= bottom){
            for(int k = right; k>=left; k--){
                cout << matrix[bottom][k] << " ";
            }
            bottom--;
        }

        // print top
        for(int l = bottom; l>=top; l--){
            cout << matrix[l][left] << " ";
        }
        left++;
        
    }
}
int main(){
    vector<vector<int>> matrix;
    vector<int> r1= {1};
    vector<int> r2= {2};
    vector<int> r3= {3};
    matrix.push_back(r1);
    matrix.push_back(r2);
    matrix.push_back(r3);
    int n = matrix.size();
    int m = matrix[0].size();

    printSprialOrder(matrix,n,m);
    return 0;
}