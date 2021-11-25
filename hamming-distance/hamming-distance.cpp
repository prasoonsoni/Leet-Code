class Solution {
public:
    int hammingDistance(int x, int y) {
        string X = bitset<32>(x).to_string();
        string Y = bitset<32>(y).to_string();
        int count = 0;
        for(int i=0;i<X.length();i++){
            if(X[i]!=Y[i]){
                count++;
            }
        }
        return count;
    }
};