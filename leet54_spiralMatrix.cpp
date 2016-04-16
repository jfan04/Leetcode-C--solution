class Solution{
public:
   vector<int> spiralOrder(vector<vector<int>> &matrix){
   	       vector<int> ret;
   	       if(matrix.size()==0) return ret;
   	       int left=0;
   	       int right=matrix[0].size()-1;
   	       int top=0;
   	       int bottom=matrix.size()-1;

   	       while(left<=right&&top<=bottom){

   	       	for(int i=left;i<=right;i++){
   	       		ret.push_back(matrix[top][i]);
   	       	}
   	       	for(int i=top+1;i<=bottom;i++){
   	       		ret.push_back(matrix[i][right]);
   	       	}

   	       	if(left!=right&&top!=bottom){
   	       		for(int i=right-1;i>=left;i--){
   	       		ret.push_back(matrix[bottom][i]);
   	         	}
   	       	    for(int i=bottom-1;i>top;i--){
   	       		ret.push_back(matrix[i][left]);
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