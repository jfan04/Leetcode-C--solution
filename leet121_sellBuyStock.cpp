class Solution{
public:
   int maxProfit(vector<int> &prices){
   	    int n=prices.size();
        if(n<=1)return 0;
        
        int ret=0;
        int low=prices[0];
        for(int i=1;i<n;i++){
            if(low>prices[i]) low=prices[i];
            if(prices[i]-low>ret) ret=prices[i]-low;
        }
        return ret;
   }	
};