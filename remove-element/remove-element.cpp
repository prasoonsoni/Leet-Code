class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==val){
                continue;
            }
            nums[index] = nums.at(i);
            index++;
        }
        return index;
    }
};