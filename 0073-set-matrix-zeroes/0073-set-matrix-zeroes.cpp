class Solution {
public:   
    void setZeroes(vector<vector<int>>& matrix) {
    int n=matrix.size(), m=matrix[0].size();
    vector<int>row(n,0);
    vector<int>col(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i]==1||col[j]==1){
                matrix[i][j]=0;
            }
        }
    }   
    }
};