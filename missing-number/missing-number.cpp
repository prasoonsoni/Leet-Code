class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int given_count = accumulate(nums.begin(), nums.end(),0);
        int required_count = (n*(n+1))/2;
        return required_count-given_count;
    }
};