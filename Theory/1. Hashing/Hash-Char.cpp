#include <iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << " Input the String " << endl;
    cin >> str;
    int hashArray[26] = {0};
    int n = str.size();
    for(int i=0; i<n; i++){
        hashArray[str[i]-'a']++;
    }
    char input;
    cout << " Input the character to get the frequency of::" << endl; 
    cin >> input;

    cout << "The Frequency of element" << input << " Is - " << hashArray[input-'a'] << endl;
    return 0;
}