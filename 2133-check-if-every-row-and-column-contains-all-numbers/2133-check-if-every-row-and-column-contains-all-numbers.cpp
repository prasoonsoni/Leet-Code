class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        // checking for rows
        for(int i=0;i<row;i++){
            set<int> t;
            for(int j=0;j<column;j++){
                t.insert(matrix[i][j]);
            }
            if(t.size()!=row){
                return false;
            }
        }
        
        // checking for columns
        for(int i=0;i<row;i++){
            set<int> t;
            for(int j=0;j<column;j++){
                t.insert(matrix[j][i]);
            }
            if(t.size()!=column){
                return false;
            }
        }
        return true;
    }
};