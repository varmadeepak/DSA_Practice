#include<bits/stdc++.h>
using namespace std;
string getEncodedString(string str,int n){
    string ans = "";
    map<char,int> mpp;
    for(int i=0; i<n; i++){
        mpp[str[i]]++;
    }
    for(auto it : mpp){
        ans += it.first;
        ans += std::to_string(it.second);
    }
    return ans;
}
int main(){
    string str = "";
    cout << " Input the String ::" << endl;
    getline(cin,str);
    int n = str.size()-1;
    string encoded = getEncodedString(str,n);
    cout << " The Encoded String is :: " << encoded << endl;

}