class Solution{
public:
   int trap(int A[],int n){
      int water=0;
      int maxIdx=0;

      for(int i=1;i<n;i++){
      	if(A[i]>A[maxIdx]){
      		maxIdx=i;
      	}
      }

      int maxLeft=A[0];
      for(int i=1;i<maxIdx;i++){
         if(A[i]>maxLeft){
         	maxLeft=A[i];
         }
         else{
         	water+=(maxLeft-A[i]);
         }
      }

      int maxRight=A[n-1];
      for(int i=n-2;i>maxIdx;i--){
      	if(A[i]>maxRight){
      		maxRight=A[i];
      	}
      	else{
      		water+=(maxRight-A[i]);
      	}
      }

      return water;

   }	
};