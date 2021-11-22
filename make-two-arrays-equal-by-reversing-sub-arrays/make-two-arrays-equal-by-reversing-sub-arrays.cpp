class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int l1 = target.size();
        int l2 = arr.size();
        
        if(l1!=l2){
            return false;
        }
        
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        
        for(int i=0;i<l1;i++){
            if(target[i]!=arr[i]){
                return false;
            }
        }
        return true;
    }
};