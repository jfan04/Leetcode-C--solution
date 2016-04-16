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
private:
      int sum;	
public:
	void dfs(TreeNode *root,int num){
		if(root->left==NULL&&root->right==NULL) sum+=num;
        if(root->left){
        	dfs(root->left,num*10+root->left->val);
        }
        if(root->right){
        	dfs(root->right,num*10+root->right->val);
        }

	}
    int sumNumbers(TreeNode *root){
        if(root==NULL) return 0;
        sum=0;
        dfs(root,root->val);
        return sum;
    }	
};