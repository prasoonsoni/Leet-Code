class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        vector<int> f;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        for(auto i=freq.begin();i!=freq.end();i++){
            f.push_back(i->second);
        }
        for(int i=0;i<f.size()-1;i++){
            if(f.at(i)!=f.at(i+1)){
                return false;
            }
        }
        return true;
    }
};