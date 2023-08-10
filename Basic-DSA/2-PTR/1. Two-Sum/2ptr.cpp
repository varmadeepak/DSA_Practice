#include <bits/stdc++.h>
using namespace std;
/*
    TC : O (N) + O (N log N) [Sorting] 
    SC : O(1)
*/
 



vector<int> findPairsForTwoSum(vector<int> nums,int n, int target){
     vector<int> sortedArray = nums;
        sort(sortedArray.begin(),sortedArray.end());
        int left = 0;
        int right = n-1;

        while(left < right){
            int currentSum = sortedArray[left] + sortedArray[right];
            if ( currentSum == target ) break;
            else if( currentSum < target ) left++;
            else right--;
        }
        vector<int> ans;

        for (int i=0; i<n; i++){
            if (nums[i] == sortedArray[left] || nums[i] == sortedArray[right]) ans.push_back(i);
        }
        return ans;
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