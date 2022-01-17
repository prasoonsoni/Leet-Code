class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> sizeOfWords;
        for(int i=0;i<sentences.size();i++){
            sizeOfWords.push_back(countWords(sentences[i]));
        }
        return *max_element(sizeOfWords.begin(), sizeOfWords.end());
    }
    int countWords(string s){
        int count = 1;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')
            {
                count ++;
            }
        }
        return count;
    }
};