class Solution{
public:
     int maxSubArray(int A[],int n){
     	int sum=0;
     	int ret=INT_MIN;

     	for(int i=0;i<n;i++){
     		sum=max(sum+A[i],A[i]);
     		ret=max(ret,sum);
     	}

     	return ret;
     }	
};