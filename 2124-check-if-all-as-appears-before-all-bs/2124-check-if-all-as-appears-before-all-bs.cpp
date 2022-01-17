class Solution {
public:
    bool checkString(string s) {
        string t = s;
        sort(t.begin(), t.end());
        if(s==t){
            return true;
        }
        return false;
    }
};