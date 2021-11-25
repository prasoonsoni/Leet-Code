class Solution {
public:
    bool detectCapitalUse(string word) {
        int size = word.size();
        int lower = 0;
        int upper = 0;
        for(int i=0;i<size;i++){
            if(word[i]>='A' && word[i]<='Z'){
                upper++;
            }
            if(word[i]>='a' && word[i]<='z'){
                lower++;
            }
        }
        if(lower==size || upper==size){
            return true;
        }
        if(upper==1 && lower==size-1 && word[0]>='A' && word[0]<='Z'){
            return true;
        }
        return false;
    }
};