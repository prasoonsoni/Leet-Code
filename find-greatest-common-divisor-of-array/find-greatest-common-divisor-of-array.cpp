class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int max_num = nums[nums.size()-1];
        int min_num = nums[0];
        /*int gcd = INT_MIN;
        for(int i=1;i<=max(max_num,min_num);i++){
            if(min_num%i==0 && max_num%i==0){
                gcd = max(gcd,i);
            }
        }
        return gcd;*/
        // Another methor with built in library
        
        return __gcd(max_num, min_num);
    }
};