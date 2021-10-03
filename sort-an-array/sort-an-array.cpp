class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> sorted_arr = nums;
        sort(sorted_arr.begin(),sorted_arr.end());
        return sorted_arr;
    }
};