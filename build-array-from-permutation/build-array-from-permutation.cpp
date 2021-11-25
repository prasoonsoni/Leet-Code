class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(auto i:nums){
            result.push_back(nums[i]);
        }
        return result;
    }
};