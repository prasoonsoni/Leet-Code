class Solution {
    public int[][] transpose(int[][] matrix) {
        int row = matrix.length;
        int col = matrix[0].length;
        
        if(row == col){
            int transposeOne[][] = new int[row][col];

            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    transposeOne[j][i] = matrix[i][j];
                }
            }
            return transposeOne;
        }else{
            int transposeTwo[][] = new int[col][row];
            for(int i=0; i<col; i++){
                for(int j=0; j<row; j++){
                    transposeTwo[i][j] = matrix[j][i];
                }
            }
            return transposeTwo;
        }
    }
}