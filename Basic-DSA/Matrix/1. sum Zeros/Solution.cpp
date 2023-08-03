#include <bits/stdc++.h>
using namespace std;

int main(){
    int countNeighbourOne = 0;
    vector<vector<int>> mat;
    vector<int> r1 = {2,2};
    vector<int> r2 = {1,0};
    vector<int> r3 = {0,1};
    mat.push_back(r1);
    mat.push_back(r2);
    mat.push_back(r3);
    int n = mat.size();
    int m = mat[0].size();
    cout << "2D Traversal " << endl;
    for( int i =0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == 0 ){
                // check-left case
                if( (j>0) && mat[i][j-1] == 1 ) countNeighbourOne++;

                //right case
                if( (j < m-1) && mat[i][j+1] == 1 ) countNeighbourOne++;

                // bottom case
                if( (i < n-1) && (mat[i+1][j] == 1) ) countNeighbourOne++;

                // top case
                if( ( i > 0) && (mat[i-1][j] == 1) ) countNeighbourOne++;
            }
        }
    }
    cout <<"Number of ones in neighbors :" <<  countNeighbourOne << endl;
    return 0;
}