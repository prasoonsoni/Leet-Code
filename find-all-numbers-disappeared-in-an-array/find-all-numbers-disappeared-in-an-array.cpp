class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end()); 
        set<int> s1,s2,result;
        for(int i=0;i<nums.size();i++) {
            s1.insert(nums[i]);
            s2.insert(i+1);
        }    
        set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(result,result.end()));
        vector<int> op(result.begin(),result.end());
        return op;
    }
};