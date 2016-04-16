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
   bool dfs(TreeNode *root,int sum,int curSum){
   	   if(root==NULL) return false;
   	   if(root->left==NULL&&root->right==NULL){
   	   	   return curSum+root->val==sum;
   	   }

   	   return dfs(root->left,sum,curSum+root->val)||dfs(root->right,sum,curSum+root->val);
   }
   bool hasPathSum(TreeNode *root,int sum){
       return dfs(root,sum,0);
   }	
};