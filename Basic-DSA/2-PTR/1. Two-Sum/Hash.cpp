#include <bits/stdc++.h>
using namespace std;
/*
    TC : O (N log N ) // O (N^2) [Unordered Map]
    SC : O(N)
*/

vector<int> findPairsForTwoSum(vector<int> nums,int n, int target){
    map<int,int> mpp;
        for(int i=0; i<n; i++){
            int currElement = nums[i];
            int remSum = target-currElement;
            if( mpp.find(remSum) != mpp.end()) return {i,mpp[remSum]};
            mpp[currElement] = i;
        }
        return {-1,-1};
}

int main(){
    vector<int> nums{2,7,11,15};
    int n = nums.size();
    int target = 9;
    vector<int> ans = findPairsForTwoSum(nums,n,target);

    cout << " Pairs of Two sum are :: " << endl;

    cout <<"1st : " << ans[0] << endl;
    cout << "2nd : " << ans[1] << endl;

    return 0;
}