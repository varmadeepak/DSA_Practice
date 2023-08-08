#include <bits/stdc++.h>
using namespace std;
// <<<< APPROACH >>>
/*
   1. Sort each letter of give string ("eat" -> "aet")
   2. Create a hashmap and store the corresponding anagrams [for "ate" -> "eat", "tea","ate"]
   3. Store the it.second in ans
   4. return ans
*/

/*
    TC : O (N klogk)
    SC : O (NK)
*/


vector<vector<string>> findGroupAnagrams(vector<string> str, int n){
    unordered_map<string,vector<string>> mpp;
    vector<vector<string>> ans;
    for(int i=0; i<n; i++){

        string tempStr = str[i];
        sort(tempStr.begin(),tempStr.end());
        mpp[tempStr].push_back(str[i]);
    }
    for(auto it : mpp){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    vector<string> str{"eat","tea","tan","ate","nat","bat"};
    int strSize  = str.size();
    vector<vector<string>> group_anagrams = findGroupAnagrams(str,strSize);
    for (const vector<string>& group : group_anagrams) {
        cout << "[";
        for (const string& str : group) {
            cout << "\"" << str << "\", ";
        }
        cout << "]" << endl;
    }

    return 0;
}