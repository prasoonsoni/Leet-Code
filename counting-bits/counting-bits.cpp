class Solution {
public:
    int count_one(int n){
        bitset<32> num(n);
        int count = 0;
        while(n){
            if(n&1){
                count++;
            }
            n >>= 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
            result.push_back(count_one(i));
        }
        return result;
    }
};