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
	bool recursive(TreeNode *leftNode,TreeNode *rightNode){
		if(leftNode==NULL&&rightNode==NULL) return true;
		if(leftNode==NULL||rightNode==NULL) return false;
		return (leftNode->val==rightNode->val)&&recursive(leftNode->left,rightNode->right)&&recursive(leftNode->right,rightNode->left);
	}
    bool isSymmetric(TreeNode *root){
        if(root==NULL) return true;
        return recursive(root->left,root->right);
    }	
};