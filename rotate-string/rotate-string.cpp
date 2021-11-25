class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.length();i++){
            s = s.substr(1,s.length()) + s[0];
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};