class Solution{
public:
    int numDistinct(string S,string T){
    	int m=S.length();
    	int n=T.length();
    	if(m<n) return 0;

    	vector<vector<int>> f(m+1,vector<int>(n+1,0));

    	f[0][0]=1;

    	for(int i=1;i<=m;i++){
    		f[i][0]=1;
    	}

    	for(int i=1;i<=m;i++){
    		for(int j=1;j<=n;j++){
    			if(S[i-1]==T[j-1]){
    				f[i][j]=f[i-1][j-1]+f[i-1][j];
    			}
    			else{
    				f[i][j]=f[i-1][j];
    			}
    		}
    	}

    	return f[m][n];
    }	
};