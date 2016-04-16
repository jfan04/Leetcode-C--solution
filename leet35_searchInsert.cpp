class Solution{
public:
    int searchInsert(int A[],int n,int target){
    	int i;
        for(i=0;i<n;i++){
        	if(A[i]==target){
        		return i;
        	}

        	else if(A[i]>target){
        		if(i==0) return 0;
        		else return i;
        	}
        }

        return n;
    }	
};