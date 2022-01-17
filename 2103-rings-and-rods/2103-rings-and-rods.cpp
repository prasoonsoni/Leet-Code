class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        vector<set<char>> r (10,{'$'});
        for(int i=0;i<rings.size()-1;i++){
            if(i%2==0){
                int index = rings[i+1] - '0';
                r[index].insert(rings[i]);
            }
            
        }
        for(auto i:r){
            if(i.size()==4){
                count++;
            }
        }
        return count;
    }
};