#include <bits/stdc++.h>
using namespace std;

// LC 387
// <--- Approach -->
/*
    1. Create a hashamp and store the frequency of each character in string 
    2. Traverse the string and check corresponging frequency of char in map ,
        if == 1 return i else -1;

    TC : O (N)
    SC : O (N)
*/
int findFirstUnique(string str , int n){
    unordered_map<char,int> mpp;

    for(int i=0; i<n; i++){
        mpp[str[i]]++;
    }

    for(int i=0; i<n; i++){
        if( mpp[str[i]] == 1 ) return i;
    }
    return -1;
}
int main(){
    string str;
    cout << " Input String " << endl;
    cin >> str;
    int n = str.size();
    int indexOfFirstUnique = findFirstUnique(str,n);
    cout << " The index of First Unique Character is : " << indexOfFirstUnique << " And character is : " << str[indexOfFirstUnique] << endl;
    return 0;
}