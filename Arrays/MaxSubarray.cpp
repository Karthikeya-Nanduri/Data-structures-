#include<iostream>
#include<vector>
using namespace std;

// This takes time O(n^2);  -- This is not the optimal code 

int maxSubarray(vector<int> &nums){
    int ans = INT16_MIN;
for(int i=0;i<nums.size();i++){  // Traverse the entire array.
    int sum = 0; // After each element , we will find the sum of all subarrays from that element
    for(int j=i;j<nums.size();j++){ // Subarray starting from that element (nums[i]).
        sum = sum + nums[j];
        ans = max(ans , sum);
    }
}
 return ans;
}

int main(){
    vector<int> nums = {0,1,-1,4,3,7,6};
    int ans = maxSubarray(nums);
    cout<< "Maximum subarray : " << ans << endl;     
    return 0;
}