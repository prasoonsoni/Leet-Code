class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto i: freq){
            if(i.second>1){
                result.push_back(i.first);
            }
        }
        return result;
        
        
    }
};