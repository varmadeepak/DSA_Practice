#include <bits/stdc++.h>
using namespace std;
/*
    Link : https://leetcode.com/problems/reverse-words-in-a-string/
*/

//<-------APPROACH ----- >

/*
    1. Initialize a pointer i to end of a string 
    2. Traverse the String right to left and remove trailing spaces  ( "the sky    ") [here remove spaces after sky]
    3. deceremnt i unitl we get a space to obtain a word 
    4. now i-j represent one complete word , append it to ans string (if empty directly append or append ' ' then word)
    5. repeat this unitl i>=0 
    6. for leading spaces use conidtion if (i<0 ) break;
    TC : O (N)
    SC : O(N)
*/

/*
    Edge Case : Leading spaces ("   the sky is blue")
    Solution : if (i <0 ) break;
*/


void strAppend(string str , string& ans , int i , int j){
    while( i <= j ){
        ans.push_back(str[i]);
        i++;
    }
}
string reverseWordsOfString(string str,int n){
    string ans = "";
    int i = n;
    while(i >= 0) {
        while(i>=0 && str[i] == ' ') i--;
        int j = i;
        if( i<0 ) break;
        while(i>=0 && str[i]!=' ') i--;
        if(ans.empty()){
            strAppend(str,ans,i+1,j);
        }
        else{
            ans+=' ';
            strAppend(str,ans,i+1,j);
        }
    }
    return ans;
}
int main(){
    string str = "";
    cout << "Input a String : " << endl;
    getline(cin,str);
    int n = str.size()-1;
    string reverseWords = reverseWordsOfString(str,n);
    cout << " The Rversed words of a string are : " << reverseWords << endl; 
}