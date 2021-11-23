class Solution {
public:
    string generateTheString(int n) {
        string result = "";
        if(n%2!=0){
            for(int i=0;i<n;i++){
                result += "a";
            }
        } else {
            result += "b";
            for(int i=0;i<n-1;i++){
                result += "a";
            }
        }
        return result;
    }
};