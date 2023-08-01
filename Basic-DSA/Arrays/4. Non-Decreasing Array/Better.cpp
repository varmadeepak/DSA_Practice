#include <iostream>
#include <vector>
using namespace std;
/*
    Link : https://leetcode.com/problems/non-decreasing-array/
*/

//<-------APPROACH ----- >

/*
    1. Traverse The array and check for required condition (nums[i] <= nums[i+1]) , if yes skip the loop statements and i++
    2. Check for at most 1 change condition
    3. Now main conditions : 
        a. [4,2,3] if we are at 2 we have 2 options 
            1. 2 <> 3 
            2. 2 <> 4 
            the swap / change depends on condition nums[i+1] >= nums[i-1] 
            here 4>3 so we cannot make 2 <> 3 better choice is 2 <> 4
        b. if i==0 directly make nums[i] = nums[i+1] 
    3. make flag = true
    4. if out of loop return true

    TC : O (N)
*/
bool checkDecreasingArray(vector<int>& nums,int n){
    bool flagChanged = false;
    for(int i=0; i<n-1;i++){
        if ( nums[i] <= nums[i+1]) continue;
        if (flagChanged) return false;
        if( (i==0) || (nums[i+1] >= nums[i-1]) ) nums[i] = nums[i+1];
        else nums[i+1] = nums[i];
        flagChanged = true;
    }
    return true;
}
int main(){
    vector<int> nums = {4,2,3};
    int n = nums.size();
    if(checkDecreasingArray(nums,n)) cout << " Non-Decreasing Array";
    else cout << " False";
    return 0;
}