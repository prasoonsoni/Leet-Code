class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    result.insert(nums1[i]);
                }
            }
        }
        vector<int> r(result.begin(), result.end());
        return r;
        
    }
};