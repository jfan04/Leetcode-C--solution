class Solution{
public:
      bool searchMatrix(vector<vector<int>> &matrix,int target){
      	if(matrix.size()==0) return false;
        
        int m=matrix.size();
        int n=matrix[0].size();
        int tmp=-1;
        
        for(int i=0;i<m;i++){
            if(matrix[i][n-1]==target) return true;
            else if(matrix[i][n-1]>target){
                tmp=i;
                break;
            }
        }
        
        if(tmp==-1) return false;
        
        int left=0;
        int right=n-1;
        
        while(left<=right){
            int mid=(left+right)/2;
            if(matrix[tmp][mid]==target) return true;
            else if(matrix[tmp][mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        
        return false;
      }	
};