class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        for (int i=0;i<nums.size();i++){
            if(nums.at(i)==target || nums.at(i)>target){
                index = i;
                break;
            }
        }
        return index;
    }
};