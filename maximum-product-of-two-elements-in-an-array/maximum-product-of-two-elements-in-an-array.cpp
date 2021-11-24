class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_num = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                max_num = max(max_num, ((nums[i]-1)*(nums[j]-1)));
            }
        }
        return max_num;
    }
};