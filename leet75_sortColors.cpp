class Solution{
public:
   void sortColors(int A[],int n){
   	    if(n<2) return;
        
        int red=0;
        int blue=n-1;
        
        for(int i=red;i<=blue;i++){
            if(A[i]==0){
                   swap(A[i],A[red++]);  
            }
            else if(A[i]==2){
                    swap(A[i--],A[blue--]);
            }
        }
   }	
};