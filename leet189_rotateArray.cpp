class Solution{
public:
    void rotate(int nums[],int n,int k){
    	//TLE
    	/*k=k%n;
    	if(k==0) return;

    	int tmp;

    	for(int i=0;i<k;i++){
    		tmp=nums[n-1];
    		for(int j=n-1;j>0;j--){
    			nums[i]=nums[i-1];
    		}
    		nums[0]=tmp;
    	}*/

    	k=k%n;
    	if(k==0) return;

    	int *tmp=new int[n];

    	memcpy(tmp,nums+n-k,sizeof(int)*k);
    	memcpy(tmp+k,nums,sizeof(int)*(n-k));
    	memcpy(nums,tmp,sizeof(int)*n);	
    }
};