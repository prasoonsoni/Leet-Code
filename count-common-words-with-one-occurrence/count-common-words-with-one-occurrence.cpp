class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> f1,f2;
        int count = 0;
        for(auto i:words1){
            f1[i]++;
        }
        for(auto i:words2){
            f2[i]++;
        }
        
        for(auto i:f1){
            if(i.second==1) {
                if(f2[i.first]==1)
                    count++;
            }
         }
        return count;
    }
    
};