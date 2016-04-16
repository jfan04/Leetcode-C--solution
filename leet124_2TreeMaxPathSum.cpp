//Definition for binary tree.
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
    int dfs(TreeNode *root,int &ret){
    	if(root==NULL) return 0;
    	int left=dfs(root->left,ret); //solve from bottom to top;
    	int right=dfs(root->right,ret);

    	int sum=root->val;
    	if(left>0)sum+=left;
    	if(right>0)sum+=right;

    	ret=max(ret,sum);
    	return max(root->val,max(left,right)+root->val);
    }
    int maxPathSum(TreeNode *root){
        if(root==NULL) return 0;
        int ret=root->val;
        dfs(root,ret);
        return ret;
    }	
};