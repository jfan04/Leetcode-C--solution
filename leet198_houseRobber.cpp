class Solution{
public:
   int rob(vector<int> &num){
   	 int n=num.size();
   	 if(n<=1) return n==0?0:num[0];

   	 vector<int> dp(n);
   	 dp[0]=num[0];
   	 dp[1]=num[0]>num[1]?num[0]:num[1];

   	 for(int i=2;i<n;i++){
   	 	dp[i]=max(dp[i-1],num[i]+dp[i-2]);
   	 }

   	 return dp[n-1];
   }	
};