class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                            "...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> op;
        
        for (int i=0;i<words.size();i++){
            
            string temp = "";
            
            for(int j=0;j<words[i].size();j++){
                temp += morse[words[i][j] - 97];
            }
            op.insert(temp);
            
        }
        
        return op.size();
        
    }
};