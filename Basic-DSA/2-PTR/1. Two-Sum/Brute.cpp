#include <bits/stdc++.h>
using namespace std;
vector<int> findPairsForTwoSum(vector<int> nums,int n, int target){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if (nums[i] + nums[j] == target) return {i,j};
        }
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