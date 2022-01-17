class Solution {
public:
    bool isPalindrome(string s) {
        string a = convertString(s);
        string b = a;
        reverse(b.begin(), b.end());
        if(a==b){
            return true;
        }
        return false;
    }
    string convertString(string s){
        string converted = "";
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0' && s[i]<='9')){
                converted+=tolower(s[i]);
            }
        }
        return converted;
    }
    
};