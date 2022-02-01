class Solution {
public:
    // using binary search
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        vector<int> indexes = {-1,-1};
        // for finding first occurance
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target<nums[mid]){
                end = mid - 1;
            } else if(target>nums[mid]){
                start = mid + 1;
            } else {
                indexes[0] = mid;
                end = mid - 1;
            }
        }
        // for finding second occurance
        start = 0;
        end = nums.size()-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target<nums[mid]){
                end = mid - 1;
            } else if(target>nums[mid]){
                start = mid + 1;
            } else {
                indexes[1] = mid;
                start = mid + 1;
            }
        }
        
        return indexes;
    }
};