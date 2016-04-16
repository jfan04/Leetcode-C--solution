class Solution{
public:
   int maxProfit(vector<int> &prices){
   	   int n=prices.size();
        if(n==0) return 0;
        vector<int> f1(n);
        vector<int> f2(n);
        
        int minp=prices[0];
        f1[0]=0;
        for(int i=1;i<n;i++){
            minp=min(prices[i],minp);
            f1[i]=max(f1[i-1],prices[i]-minp);
        }
        
        int maxp=prices[n-1];
        f2[n-1]=0;
        for(int i=n-2;i>=0;i--){
            maxp=max(prices[i],maxp);
            f2[i]=max(f2[i+1],maxp-prices[i]);
        }
        
        int ret=0;
        for(int i=0;i<n;i++){
            ret=max(ret,f1[i]+f2[i]);
        }
        
        return ret;
   }	
};