class Solution{
public:
    int removeDuplicates(int A[],int n){
    	int ret=0;
        
        for(int i=0;i<n;i++){
            if(i==0||i==1){
                A[ret++]=A[i];
            }
            else{
                if(A[i]!=A[ret-2]){
                    A[ret++]=A[i];
                }
            }
        }
        
        return ret;
    }	
};