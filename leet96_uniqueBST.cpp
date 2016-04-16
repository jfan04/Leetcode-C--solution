class Solution{
pulic:
  int numTrees(int n){
  	    if(n==0||n==1) return 1;
        vector<int> f(n+1);
        f[0]=1;
        f[1]=1;
        
        for(int i=2;i<=n;i++){
            for(int j=1;j<=i;j++){
                f[i]+=f[j-1]*f[i-j];
            }
        }
        return f[n];
  }	
};