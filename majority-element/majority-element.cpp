class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto i:nums){
            freq[i]++;
        }
        for(auto i:freq){
            if(i.second > nums.size()/2){
                return i.first;
            }
        }
        return -1;
    }
};