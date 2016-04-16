class Solution{
public:
     bool canJump(int A[],int n){
     	if(n==0||n==1) return true;
        int maxL=A[0];
     	for(int i=1;i<n;i++){
     		if(maxL==0) return false;
     		maxL--;
     		if(maxL<A[i]) maxL=A[i];
     		if(maxL+i>=n-1) return true;
     	}
     }	
};