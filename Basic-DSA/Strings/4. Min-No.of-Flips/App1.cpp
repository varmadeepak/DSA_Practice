#include <bits/stdc++.h>
using namespace std;
/*
    Link :https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1

//<-------APPROACH ----- >

/*
    1. Traaverse the string
    2. If found ( leftCount ++ 
        a. rightSum = TotalSum - Arr[i] - leftSum;
        b. leftSum += Arr[i];
    3. If found ) 
        a. check if there exists any '(' [if(leftParanthesisCount > 0 ) ] if yes , leftCount -- {Balancing left and right paranthesis}
        b. else rightCount ++;
    4. return leftCount + rightCount; [Indicates the remaining balanace required for left parantheses + balanace required for right parantheses]
    TC : O (N)
    SC : O(1)
*/
int getMinNumberOfFlips(string str,int n){
    int countZero = 0;
    int countOne = 0;

    for(int i=0; i<n; i++){
       // 0 - start

       if( ( i % 2 == 0) && ( str[i] == '1' ) ) countZero;
       else if( !( i % 2 == 0 ) && ( str[i] == '0' ) ) countOne;


       // 1 - start

       if( ( i % 2 == 0) && ( str[i] == '0' ) ) countOne++;
       else if( !( i % 2 == 0 ) && ( str[i] == '1' ) ) countZero;
       
    }
    return min ( countOne , countZero);
}
int main(){
    string str = "";
    cout << " Enter paranthesis string" << endl;
    getline(cin , str);
    int n = str.size();
    int minNoOfFips = getMinNumberOfFlips(str,n);
    cout << "Minimum Number of flips  to be done : " << minNoOfFips << endl;
    return 0;
}