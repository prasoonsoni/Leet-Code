class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        // checking for rows
        for(int i=0;i<row;i++){
            set<int> r,c;
            for(int j=0;j<column;j++){
                r.insert(matrix[i][j]);
                c.insert(matrix[j][i]);
            }
            if(r.size()!=row || c.size()!=column){
                return false;
            }
        }
        
        return true;
    }
};