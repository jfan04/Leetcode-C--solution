class Solution{
public:
     int jmmp(int A[],int n){
     	int curRch=0;
     	int curMax=0;
     	int ret=0;

     	for(int i=0;i<n;i++){

     		if(curRch<i){
                ret++;
                curRch=curMax;
     		}

     		curMax=(curMax,A[i]+i);
     	}

     	return ret;

     }	
};