class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto i:nums){
            string num = to_string(i);
            if(num.length()%2==0){
                count++;
            }
        }
        return count;
    }
};