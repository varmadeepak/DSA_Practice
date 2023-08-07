#include <bits/stdc++.h>
using namespace std;

// LC 387
// <--- Approach -->
/*
    1. Create a Alphabet array [Length = 26][All 0's] and store the frequency of each character
        in string by increment the corresepongind index (it can be frequencyArray[str[i]-'a'] )
    2. Traverse the string and check corresponging frequency of char in frequencyArray  ,
        if == 1 return i else -1;

    TC : O (N)
    SC : O (26)
*/
int findFirstUnique(string str , int n){
    vector<int> frequencyArray(26,0);
    for(int i=0; i<n; i++){
        frequencyArray[str[i]-'a']++; // This will give index of current element (ascii of s[i] - 97)
    }

    for(int i=0; i<n; i++){
        if(frequencyArray[str[i]-'a'] == 1 ) return i;
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