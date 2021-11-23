class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> chars;
        for(int i=0;i<s.length();i++){
            if(chars.empty()){
                chars.push(s[i]);
            } else {
                if(chars.top()==s[i]){
                    chars.pop();
                } else {
                    chars.push(s[i]);
                }
            }
            
        }
        string result = "";
        while(!chars.empty()){
            result += chars.top();
            chars.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};