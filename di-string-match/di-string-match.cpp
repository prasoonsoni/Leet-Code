class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> result;
        int i = 0;
        int d = s.length();
        for(int k=0;k<s.length();k++){
            if(s[k]=='I'){
                result.push_back(i);
                i++;
            } else {
                result.push_back(d);
                d--;
            }
        }
        result.push_back(d);
        return result;
    }
};