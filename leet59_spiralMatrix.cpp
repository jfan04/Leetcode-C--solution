class Solution{
public:
     vector<vector<int>> generateMatrix(int n){
     	vector<vector<int>> ret(n,vector<int>(n));

     	int left=0;
     	int right=n-1;
     	int top=0;
     	int bottom=n-1;

        int num=1;

     	while(num<=n*n){
            for(int i=left;i<=right;i++){
            	ret[top][i]=num++;
            }

            for(int i=top+1;i<=bottom;i++){
            	ret[i][right]=num++;
            }

            if(left!=right){
            	for(int i=right-1;i>=left;i--){
            		ret[bottom][i]=num++;
            	}
            }
            if(top!=bottom){
            	for(int i=bottom-1;i>top;i--){
            		ret[i][left]=num++;
            	}
            }

            left++;
            right--;
            top++;
            bottom--;
     	}

     	return ret;
     }	
};