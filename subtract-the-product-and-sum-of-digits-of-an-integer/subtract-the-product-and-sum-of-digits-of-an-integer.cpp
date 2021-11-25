class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> digits;
        while(n>0){
            int digit = n%10;
            digits.push_back(digit);
            n /= 10;
        }
        int mul = 1;
        int sum = 0;
        for(auto i:digits){
            mul *= i;
            sum += i;
        }
        return (mul-sum);
    }
};