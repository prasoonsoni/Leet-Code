class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        int n = s.size()/2;
        while(i<=n && j>=n){
            char temp = s.at(i);
            s.at(i) = s.at(j);
            s.at(j) = temp;
            i++;j--;
        }
    }
};