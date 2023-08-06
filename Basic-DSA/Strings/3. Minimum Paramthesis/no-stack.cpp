#include <bits/stdc++.h>
using namespace std;
/*
    Link : https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

//<-------APPROACH ----- >

/*
    1. Traaverse the string
    2. If found ( leftCount ++ 
    3. If found ) 
        a. check if there exists any '(' [if(leftParanthesisCount > 0 ) ] if yes , leftCount -- {Balancing left and right paranthesis}
        b. else rightCount ++;
    4. return leftCount + rightCount; [Indicates the remaining balanace required for left parantheses + balanace required for right parantheses]
    TC : O (N)
    SC : O(1)
*/
int getMinimumParanthesisCount(string str,int n){
    int leftParanthesisCount = 0;
    int rightParanthesisCount = 0;

    for(int i=0; i<n; i++){
        if ( str[i] == '(') leftParanthesisCount++;
        else if(str[i] == ')') {
            if(leftParanthesisCount > 0 ) leftParanthesisCount--;
            else rightParanthesisCount++;
        }
    }
    return leftParanthesisCount + rightParanthesisCount;
}
int main(){
    string str = "";
    cout << " Enter paranthesis string" << endl;
    getline(cin , str);
    int n = str.size();
    int minimumAddParanthesis = getMinimumParanthesisCount(str,n);
    cout << "Minimum Paranthesis to be added : " << minimumAddParanthesis << endl;
    return 0;
}
