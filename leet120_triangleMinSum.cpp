class Solution{
public:
   int minimumTotal(vector<vector<int>> &triangle){
   	    if(triangle.size()==0) return 0;
        if(triangle.size()==1) return triangle[0][0];
        int n=triangle.size();
        
        int dp[n][n];
        
        for(int i=0;i<n;i++){
            dp[n-1][i]=triangle[n-1][i];
        }
        
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<=i;j++){
                dp[i][j]=(dp[i+1][j]<dp[i+1][j+1]?dp[i+1][j]:dp[i+1][j+1])+triangle[i][j];
            }
        }
        
        return dp[0][0];
   }	
};