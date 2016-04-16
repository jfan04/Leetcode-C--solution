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
	int getDep(TreeNode *root){
      if(root==NULL) return 0;
      return max(getDep(root->left),getDep(root->right))+1;
	}	
	bool isBalanced(TreeNode *root){
       if(root==NULL) return true;
       if(abs(getDep(root->left)-getDep(root->right))>1) return false;
       return isBalanced(root->left)&&isBalanced(root->right);
	}	
};