#include <iostream>
using namespace std;
/*
    Hashing : 
        a. Defination : Hashing is a popular technique for quickly storing and retrieving data. 
                        The primary reason for using hashing is that it produces optimal results by performing optimal searches
*/
int main(){
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout <<"Input the Array ::" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Creating HashArray 
    int hashArray[n+1] = {0};
    for(int i=0; i<n; i++){
        hashArray[arr[i]]++;
    }
    int input;
    cout << " Input the number to get the frequency of::" << endl; 
    cin >> input;

    cout << "The Frequency of element" << input << " Is - " << hashArray[input] << endl;
    return 0;
}