class Solution{
public:
    bool search(int A[],int n,int target){
        if(n==0) return false;
        for(int i=0;i<n;i++){
            if(A[i]==target){
                return true;
            }
        }
        return false;
    }	
};