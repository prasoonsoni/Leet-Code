class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){return nums[0];}
        
        unordered_map<int, int> um;
        
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto it:um){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};