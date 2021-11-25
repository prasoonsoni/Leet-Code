class Solution {
public:
    bool isVowel(char s) {
        return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
    }
    
    bool halvesAreAlike(string s) {
        string s1 = s.substr(0,s.length()/2);
        string s2 = s.substr(s.length()/2, s.length());
        int v_s1 = 0;
        int v_s2 = 0;
        for(int i=0;i<s.length()/2;i++){
            if(isVowel(tolower(s1[i]))){
                v_s1++;
            }
            if(isVowel(tolower(s2[i]))){
                v_s2++;
            }
        }
        return v_s1==v_s2;
    }
};