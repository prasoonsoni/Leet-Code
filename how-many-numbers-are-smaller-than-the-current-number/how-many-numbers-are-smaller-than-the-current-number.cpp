class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int size = nums.size();
        for(int i=0;i<size;i++){
            int count = 0;
            for(int j=0;j<size;j++){
                if(nums[i]>nums[j] && j!=i){
                    count++;
                }
            }
            result.push_back(count);
        }
        return result;
    }
};