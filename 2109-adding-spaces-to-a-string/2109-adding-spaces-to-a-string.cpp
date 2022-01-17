class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int k = 0;
        string result = "";
        for(int i=0;i<s.length();i++){
            if(k<spaces.size()){
                if(i==spaces[k]){
                    result+=" ";
                    k++;
                }
            }
            result+= s[i];
        }
        return result;
    }
};