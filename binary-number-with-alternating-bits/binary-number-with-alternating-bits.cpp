class Solution {
public:
    vector<int> convertToBinary(int n){
        vector<int> binary;
        while(n>0){
            binary.push_back(n%2);
            n = n/2;
        }
        return binary;
    }
    
    bool hasAlternatingBits(int n) {
        if(n==1 || n==0){
            return true;
        }
        vector<int> binary = convertToBinary(n);
        for(int i=0;i<binary.size()-1;i++){
            if(binary.at(i)==binary.at(i+1)){
                return false;
            }
        }
        
        return true;
    }
};