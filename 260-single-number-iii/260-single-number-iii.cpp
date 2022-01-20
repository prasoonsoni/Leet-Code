class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> um;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it:um){
            if(it.second==1){
                result.push_back(it.first);
            }
        }
        return result;
    }
};