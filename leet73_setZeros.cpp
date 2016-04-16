class Solution{
public:
     void setZeros(vector<vector<int>> &matrix){
     	if(matrix.size()==0) return;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        bool firstRow=false;
        bool firstCol=false;
        
        //record firstCol
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                firstCol=true;
                break;
            }
        }
        
        //record firstRow
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0){
                firstRow=true;
                break;
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        if(firstRow){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
        
        if(firstCol){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
     }	
};