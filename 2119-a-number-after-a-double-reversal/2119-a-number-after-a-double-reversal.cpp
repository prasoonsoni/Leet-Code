class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == reverse(reverse(num))){
            return true;
        }
        return false;
    }
    int reverse(int num){
        int n = num, reversedNumber = 0, remainder;
        while(n != 0) {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        return reversedNumber;
    }
};