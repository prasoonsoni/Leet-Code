class Solution {
public:
    int maxDepth(string s) {
        int temp = 0;
        int ans = 0;
        for(auto i:s){
            if(i=='('){
                temp++;
            }
            if(i==')'){
                temp--;
            }
            ans = max(ans, temp);
        }
        return ans;
    }
};