//局部最优和全局最优
//http://blog.csdn.net/linhuanmars/article/details/23236995
class Solution{
public:
      int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
    	if(n<=1) return 0;
    	if(k>=n) return maxProfit2(prices);
    	vector<vector<int>> global(n,vector<int>(k+1));
    	vector<vector<int>> local(n,vector<int>(k+1));

    	for(int i=1;i<n;i++){
    		int diff=prices[i]-prices[i-1];
    		for(int j=1;j<=k;j++){
    			local[i][j]=max(global[i-1][j-1]+max(diff,0),local[i-1][j]+diff);
    			global[i][j]=max(global[i-1][j],local[i][j]);
    		}
    	}

    	return global[n-1][k];
    }
    
    int maxProfit2(vector<int>& prices){
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]>prices[i]){
                profit+=(prices[i+1]-prices[i]);
            }
        }
        return profit;
    }	
};