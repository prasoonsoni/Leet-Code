class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int max_distance = 0;
        int diff = 0;
        
        for(int i=0;i<colors.size();i++){
           for(int j=i;j<colors.size();j++){
               if(colors[i]!=colors[j]){
                   diff = abs(i-j);
               }
           }
            max_distance = max(max_distance,diff);
        }
        
        return max_distance;
    }
};