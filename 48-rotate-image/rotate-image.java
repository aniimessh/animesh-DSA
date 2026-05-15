class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;

        // transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        // reverse row
        for(int i=0;i<n;i++){
            int startCol = 0;
            int endCOl = n-1 ;
            while(startCol <= endCOl){
                int temp = matrix[i][startCol];
                matrix[i][startCol] = matrix[i][endCOl];
                matrix[i][endCOl] = temp;
                startCol++;
                endCOl--;
            }
        }
    }
}