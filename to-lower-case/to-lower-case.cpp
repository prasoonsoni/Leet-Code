class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        
        for(char i:s){
            result += tolower(i);
        }
        
        return result;
    }
};