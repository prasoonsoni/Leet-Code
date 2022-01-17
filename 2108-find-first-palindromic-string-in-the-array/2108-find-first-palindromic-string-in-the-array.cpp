class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i = 0;i<words.size();i++){
            if(words[i]==reversedString(words[i])){
                return words[i];
                break;
            }
        }
        return "";
    }
    
    string reversedString(string s){
        string rev = "";
        for(int i=s.length()-1;i>=0;i--){
            rev+=s[i];
        }
        return rev;
    }
};