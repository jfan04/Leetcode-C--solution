//Definition for binary tree
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
	/* data */
};

class Solution{
public:
   TreeNode *dfs(vector<int> &num,int start,int end){
   	   if(start>end) return NULL;
   	   int mid=(start+end)/2;
   	   TreeNode *root=new TreeNode(num[mid]);
   	   root->left=dfs(num,start,mid-1);
   	   root->right=dfs(num,mid+1,end);
   	   return root;
   }

   TreeNode *sortedArrayToBST(vector<int> &num){
   	  return dfs(num,0,num.size()-1);
   }	
};