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
	TreeNode *dfs(TreeNode *root){
		if(root==NULL||(root->left==NULL&&root->right==NULL)) return root;
		TreeNode *left=root->left;
		TreeNode *right=root->right;

		root->left=NULL;
		if(left){
			root->right=left;
			root=dfs(left);
		}
		if(right){
			root->right=right;
			root=dfs(right);
		}

		return root;
	}
    void flatten(TreeNode *root){
        dfs(root);
    }
};