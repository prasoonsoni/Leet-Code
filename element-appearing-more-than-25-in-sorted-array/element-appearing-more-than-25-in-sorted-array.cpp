class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size = arr.size();
        unordered_map<int,int> freq;
        for(auto i:arr){
            freq[i]++;
        }
        for(auto i:freq){
            if(i.second>size/4){
                return i.first;
            }
        }
        return -1;
    }
};