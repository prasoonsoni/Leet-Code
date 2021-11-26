class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        int last = s.size()-1;
        for(int i=0;i<size/2;i++){
            swap(s[i], s[last]);
            last--;
        }
    }
};