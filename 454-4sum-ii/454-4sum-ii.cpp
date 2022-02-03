class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> freq;
        int count = 0;
        for(auto i:nums1){
            for(auto j:nums2){
                freq[i+j]++;
            }
        }
        for(auto k:nums3){
            for(auto l:nums4){
                if(freq[0-k-l]){
                    count += freq[0-k-l];
                }
            }
        }
        return count;
        
    }
};