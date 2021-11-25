class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result = nums;
        for(auto i:nums){
            result.push_back(i);
        }
        return result;
        
    }
};